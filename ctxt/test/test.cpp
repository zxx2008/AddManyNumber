#include "../PtxtVector.h"
#include "../CtxtVector.h"

int main() {
    long base = 2;
    long m =  27305;
    // Hensel lifting (default = 1).
    long r = 1;
    // Number of bits of the modulus chain.
    long bits = 500;
    // Number of columns of Key-Switching matrix (typically 2 or 3).
    long c = 2;
    // Factorisation of m required for bootstrapping.
    //std::vector<long> mvec = {7, 5, 9, 13};
    // Generating set of Zm* group.
    //std::vector<long> gens = {2341, 3277, 911};
    // Orders of the previous generators.
    //std::vector<long> ords = {6, 4, 6};
    //std::cout << "Initialising context object..." << std::endl;
    helib::Context context = helib::ContextBuilder<helib::BGV>()
                               .m(m)
                               .p(base)
                               .r(r)
                               .bits(bits)
                               .c(c)
                               .build();


    std::cout << "Security: " << context.securityLevel() << std::endl;

    std::cout << "Creating secret key..." << std::endl;

    helib::SecKey secret_key(context);
    // Generate the secret key.
    secret_key.GenSecKey();

    const helib::PubKey& public_key = secret_key;
    // Get the EncryptedArray of the context.
    const helib::EncryptedArray& ea = context.getEA();

    // Get the number of slot (phi(m)).
    long nslots = ea.size();

    std::cout << "Number of slots: " << nslots << std::endl;

    PtxtVector* ptxt = new PtxtVector(55, nslots);

    CtxtVector* ctxt = new CtxtVector(ea, *ptxt, public_key, nslots);

    ctxt->Decrypt(ea, secret_key);

    delete ptxt;
    delete ctxt;
}
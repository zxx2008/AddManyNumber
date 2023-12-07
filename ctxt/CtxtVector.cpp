/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-07 20:44:34
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-07 21:12:13
 * @FilePath: /CLA/ctxt/CtxtVector.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */


#include "CtxtVector.h"

CtxtVector::CtxtVector() {}

CtxtVector::CtxtVector(const helib::EncryptedArray& ea, const PtxtVector& ptxt, const helib::PubKey& public_key, int slot) : slot(slot) {
    //初始化密文向量
    helib::Ctxt scratch(public_key);
    mctxt.resize(BITSIZE, scratch);
    std::vector<long> tmp;
    for (int i = 0; i < BITSIZE; ++i) {
        tmp.clear();
        tmp.resize(slot, ptxt.mptxt[i]);
        ea.encrypt(mctxt[i], public_key, tmp);
    }
}

void CtxtVector::Encrypt(const helib::EncryptedArray& ea, const helib::SecKey& secret_key) {
    std::vector<long> tmp(slot, 0);
    for (int i = 0; i < BITSIZE; ++i) {
        ea.decrypt(mctxt[i], secret_key, tmp);
        for (int j = 0; j < tmp.size(); ++j) {
            std::cout << tmp[j] <<" ";
        }
        std::cout << std::endl;
    }

}
/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-07 20:21:46
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-07 21:08:06
 * @FilePath: /CLA/ctxt/CtxtVector.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _CTXT_VECTOR_H_
#define _CTXT_VECTOR_H_

#include <helib/FHE.h>
#include "PtxtVector.h"

class CtxtVector {
    public:
    std::vector<helib::Ctxt> mctxt;
    int slot;

    /**
     * @description: 默认构造函数
     * @return {*}
     */    
    CtxtVector();
    
    /**
     * @description: 构造函数
     * @param {PtxtVector&} ptxt 明文向量
     * @return {*}
     */    
    CtxtVector(const helib::EncryptedArray& ea, const PtxtVector& ptxt, const helib::PubKey& public_key, int slot);

    void Encrypt(const helib::EncryptedArray& ea, const helib::SecKey& secret_keys);
};

#endif
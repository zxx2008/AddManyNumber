/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-07 19:57:33
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-07 20:06:50
 * @FilePath: /CLA/ctxt/PtxtVector.h
 * @Description: 明文向量
 */
#ifndef _PTXT_VECTOR_H_
#define _PTXT_VECTOR_H_

#include <vector>

#define BITSIZE 16

class PtxtVector {
    public:
    std::vector<long> mptxt;
    int slot;

    /**
     * @description: 默认构造函数
     * @return {*}
     */    
    PtxtVector();

    /**
     * @description: 构造函数
     * @param {int} num 明文的十进制数
     * @param {int} slot 全同态加密slot
     * @return {*}
     */    
    PtxtVector(int num, int slot);
};

#endif
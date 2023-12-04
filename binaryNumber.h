/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 18:47:02
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-04 21:33:46
 * @FilePath: /addbinary/CLA/CLA_16.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _BINARY_NUMBER_
#define _BINARY_NUMBER_

#include "binary.h"

#define BITSIZE 16

class binaryNumber {
    public:
    binary NUM[BITSIZE];
    
    
    /**
     * @description: 构造函数
     * @param {bool*} a 第一个加数
     * @param {bool*} b 第二个加数
     * @return {*}
     */    

    
    binaryNumber(bool* a, int size);

    /**
     * @description: 设置第一个加数
     * @param {bool*} a
     * @return {*}
     */    
    void setNum(bool* a);

    /**
     * @description: 三个数相加转化为两个数相加
     * @param {binaryNumber&} num1 并且用于存放两个数中的第一个数
     * @param {binaryNumber&} num2 并且用于存放两个数中的第二个数
     * @param {binaryNumber&} num3
     * @return {*}
     */
    friend void threeToTwo(binaryNumber& num1, binaryNumber& num2, binaryNumber& num3);
    
    /**
     * @description: 重载+=
     * @return {*}
     */    
    binaryNumber& operator+=(const binaryNumber& other);

    /**
     * @description: 重载+
     * @return {*}
     */    
    friend binaryNumber operator+(const binaryNumber& num1, const binaryNumber& num2);
};

#endif
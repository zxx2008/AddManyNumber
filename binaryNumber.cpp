/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 19:09:29
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-05 16:17:33
 * @FilePath: /addbinary/CLA/CLA_16.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "binaryNumber.h"
#include <cstdlib>
#include <iostream>


binaryNumber::binaryNumber() {
    for (int i = 0; i < BITSIZE; ++i) {
        NUM[i] = false;
    }
}

binaryNumber::binaryNumber(bool* a, int size) {
    
    if (size != BITSIZE) {
        std::cout << "Size must be " << BITSIZE << std::endl;
        std::exit(1);
    }

    //初始化
    for (int i = 0; i < BITSIZE; ++i) {
        NUM[i] = binary(*(a+i));
    }

}

void threeToTwo(const binaryNumber& num1, const binaryNumber& num2, const binaryNumber& num3, const int size, binaryNumber& res1, binaryNumber& res2) {
    if (size != BITSIZE) {
        std::cout << "Bitsize must be " << BITSIZE << std::endl;
        std::exit(1); 
    }


    for (int i = 0; i < BITSIZE; ++i) {
        res1.NUM[i] = num1.NUM[i] + num2.NUM[i] + num3.NUM[i];
    }
     
    for (int i = 0; i < BITSIZE; ++i) {
        res2.NUM[i] = num1.NUM[i] * num2.NUM[i] + (num1.NUM[i] + num2.NUM[i]) * num3.NUM[i];
    }

    res2.movLeft();
}

void binaryNumber::movLeft() {
    for (int i = BITSIZE - 1; i > 0; --i) {
        NUM[i] = NUM[i-1];
    }

    NUM[0].setValue(false);
}
/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 19:48:25
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-04 20:04:13
 * @FilePath: /addbinary/CLA/test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "CLA_16.h"

/**
 * @description: 测试CLA构造函数用例
 * @return {*}
 */
int main() {
    bool num1[BITSIZE] = {false, false, true,false, false, false, true,false, false, false, true,false, false, false, true, false};
    bool num2[BITSIZE] = {false, false, true,false, false, false, true,false, false, false, true,false, false, false, true, false};
    bool* a = num1;
    bool* b = num2;


    CLA_16* tmp = new CLA_16(a, b, BITSIZE);

    for (int i = 0; i < BITSIZE; ++i) {
        std::cout << num1[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < BITSIZE; ++i) {
        std::cout << num2[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < BITSIZE; ++i) {
        std::cout << tmp->NUM_g[i].getValue() << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < BITSIZE; ++i) {
        std::cout << tmp->NUM_p[i].getValue() << " ";
    }
    std::cout << std::endl;
    
    delete tmp;
    
    std::exit(0);
}
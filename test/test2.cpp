/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-05 16:49:16
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-05 16:51:28
 * @FilePath: /addbinary/CLA/test/test2.cpp
 * @Description: 测试用例，测试binaryNumber threetotwo
 */


#include <iostream>
#include <cstdlib>
#include "../binaryNumber.h"

int main() {
    bool num1[BITSIZE] = {false, false, true,false, false, false, true,false, false, false, true,false, false, false, false, false};

    bool num2[BITSIZE] = {true, false, false, false, false, true, true,false, false, false, true,false, false, false, false, false};

    bool num3[BITSIZE] = {true, false, false, false, false, true, false,false, false, true, true,false, false, false, false, false};

    binaryNumber* num_1 = new binaryNumber(num1, BITSIZE);
    binaryNumber* num_2 = new binaryNumber(num2, BITSIZE);
    binaryNumber* num_3 = new binaryNumber(num3, BITSIZE);

    binaryNumber* res1 = new binaryNumber();
    binaryNumber* res2 = new binaryNumber();
    threeToTwo(*num_1, *num_2, *num_3, BITSIZE, *res1, *res2);

    for (int i = BITSIZE - 1; i >=0; --i) {
        std::cout << ((num_1->NUM) + i)->getValue() << " ";
    }
    std::cout << std::endl;

    for (int i = BITSIZE - 1; i >=0; --i) {
        std::cout << ((num_2->NUM) + i)->getValue() << " ";
    }
    std::cout << std::endl;

    for (int i = BITSIZE - 1; i >=0; --i) {
        std::cout << ((num_3->NUM) + i)->getValue() << " ";
    }
    std::cout << std::endl;

    for (int i = BITSIZE - 1; i >=0; --i) {
        std::cout << ((res1->NUM) + i)->getValue() << " ";
    }
    std::cout << std::endl;

    for (int i = BITSIZE - 1; i >=0; --i) {
        std::cout << ((res2->NUM) + i)->getValue() << " ";
    }
    std::cout << std::endl;

    std::exit(0);
}
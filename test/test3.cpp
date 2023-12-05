/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-05 19:44:49
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-05 19:54:13
 * @FilePath: /addbinary/CLA/test/test3.cpp
 * @Description: 测试manyNumber toTwo用例
 */

#include <iostream>
#include <cstdlib>
#include "../manyNumber.h"

int main() {
    bool num1[BITSIZE] = {false, false, true,false, false, false, true,false, false, false, true,false, false, false, false, false};

    bool num2[BITSIZE] = {true, false, false, false, false, true, true,false, false, false, true,false, false, false, false, false};

    bool num3[BITSIZE] = {true, false, false, false, false, true, false,false, false, true, true,false, false, false, false, false};

    binaryNumber* num_1 = new binaryNumber(num1, BITSIZE);
    binaryNumber* num_2 = new binaryNumber(num2, BITSIZE);
    binaryNumber* num_3 = new binaryNumber(num3, BITSIZE);

    std::vector<binaryNumber> nums = {*num_1, *num_2, *num_3};

    manyNumber* manynums = new manyNumber(nums);

    manynums->toTwoNums();

    std::exit(0);

}
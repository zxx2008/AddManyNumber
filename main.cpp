/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 17:09:39
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-04 17:14:06
 * @FilePath: /addbinary/CLA/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "binary.h"
#include <iostream>
#include <string>
#include <cstdlib>

/**
 * @description: 测试main函数
 * @param {int} argc
 * @param {char**} argv
 * @return {*}
 */
int main(int argc, char** argv) {
    if (argc < 3) {
        std::cout << "usage: ./... num1 num2" << std::endl;
        std::exit(1);
    }

    std::string num1Str(argv[1]);
    std::string num2Str(argv[2]);

    bool num1, num2;

    if (num1Str == std::string("0")) {
        num1 = false;
    }
    else {
        num1 = true;
    }

    if (num2Str == std::string("0")) {
        num2 = false;
    }
    else {
        num2 = true;
    }

    binary number1(num1);
    binary number2(num2);

    std::cout << "num1: " << num1 << " " << "num2: " << num2 << std::endl;

    std::cout << "测试+=结果: " << (number1 += number2).getValue() << std::endl;

    number1.setValue(num1);
    binary result = number1 + number2;
    std::cout << "测试+结果: " << result.getValue() << std::endl;

    std::cout << "测试*=结果: " << (number1*=number2).getValue() << std::endl;

    number1.setValue(num1);
    result = number1 * number2;
    std::cout << "测试*结果：" << result.getValue() << std::endl;

    std::exit(0);
}
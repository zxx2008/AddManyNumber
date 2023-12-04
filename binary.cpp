/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 16:30:14
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-04 17:09:45
 * @FilePath: /addbinary/CLA/binary.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include "binary.h"

binary::binary(bool val) : value(val) {}

void binary::setValue(bool val) {
    this->value = val;
}

bool binary::getValue() {
    return value;
}

binary& binary::operator+=(const binary& other) {
    this->value ^= other.value;
    return *this; 
}

binary operator+(const binary& num1, const binary& num2) {
    bool result = num1.value ^ num2.value;
    return binary(result);
}

binary& binary::operator*=(const binary& other) {
    this->value &= other.value;
    return *this;
}

binary operator*(const binary& num1, const binary& num2) {
    bool result = num1.value & num2.value;
    return binary(result);
}
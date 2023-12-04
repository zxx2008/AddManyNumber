/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 16:12:48
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-04 19:22:42
 * @FilePath: /addbinary/CLA/binary.h
 * @Description: 二进制数类
 */
#ifndef _BINARY_H_
#define _BINARY_H_

class binary {
    private:
    bool value;
    public:

    /**
     * @description: 默认构造函数
     * @return {*}
     */    
    binary() {}

    /**
     * @description: 构造函数
     * @param {bool} val
     * @return {*}
     */    
    binary(bool val);

    /**
     * @description: 对value赋值
     * @param {bool} val
     * @return {*}
     */    
    void setValue(bool val);

    /**
     * @description: 获取value
     * @return value
     */    
    bool getValue();

    /**
     * @description: 重载+=
     * @return 计算结果
     */
    binary& operator+=(const binary& other);

    /**
     * @description: 友元函数，重载+
     * @return 计算结果
     */    
    friend binary operator+(const binary& num1, const binary& num2);

    /**
     * @description: 重载*=
     * @return 计算结果
     */    
    binary& operator*=(const binary& other);

    /**
     * @description: 重载*
     * @return 计算结果
     */    
    friend binary operator*(const binary& num1, const binary& num2);
};

#endif
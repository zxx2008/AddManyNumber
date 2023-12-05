/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-05 16:52:08
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-05 18:51:03
 * @FilePath: /addbinary/CLA/manyNumber.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#ifndef _MANY_NUMBER_h_
#define _MANY_NUMBER_h_

#include "binaryNumber.h"
#include <vector>

class manyNumber {
    public:
    std::vector<binaryNumber> NUMS;
    int size = 0;
    /**
     * @description: 默认构造函数
     * @return {*}
     */    
    manyNumber();

    /**
     * @description: 构造函数
     * @return {*}
     */    
    manyNumber(const std::vector<binaryNumber>& nums);

    /**
     * @description: 将多个数相加变为两个数相加
     * @return {*}
     */    
    void toTwoNums();
};

#endif
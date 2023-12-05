/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-05 18:53:10
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-05 19:34:49
 * @FilePath: /addbinary/CLA/manyNumber.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "manyNumber.h"
#include <iostream>

manyNumber::manyNumber() {}

manyNumber::manyNumber(const std::vector<binaryNumber>& nums) {
    NUMS = nums;
    size = nums.size();
}

void manyNumber::toTwoNums() {
    std::vector<binaryNumber> tmp1 = this->NUMS;
    std::vector<binaryNumber> tmp2;
    
    binaryNumber res1;
    binaryNumber res2;

    int groupNum = 0;

    while (tmp1.size() > 2) {
        groupNum = tmp1.size() / 3;
        for (int i = 0; i < groupNum; ++i) {
            threeToTwo(tmp1[3*i], tmp1[3*i+1], tmp1[3*i+2], BITSIZE, res1, res2);

            tmp2.push_back(res1);
            tmp2.push_back(res2);

        }
        
        for (int i = groupNum * 3; i < tmp1.size(); ++i) {
            tmp2.push_back(tmp1[i]);
        }
        
        tmp1 = tmp2;
        tmp2.clear();
    }

    for (int i = 0; i < BITSIZE; ++i) {
        std::cout << (tmp1[0].NUM+i)->getValue() << " ";
    }

    for (int i = 0; i < BITSIZE; ++i) {
        std::cout << (tmp1[1].NUM+i)->getValue() << " ";
    }
}
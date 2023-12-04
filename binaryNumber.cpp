/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-04 19:09:29
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-04 21:15:46
 * @FilePath: /addbinary/CLA/CLA_16.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "binaryNumber.h"
#include <cstdlib>
#include <iostream>

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
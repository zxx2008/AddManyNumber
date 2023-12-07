/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-07 20:09:09
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-07 20:18:58
 * @FilePath: /CLA/ctxt/PtxtVector.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "PtxtVector.h"

PtxtVector::PtxtVector() {}

PtxtVector::PtxtVector(int num, int slot) : slot(slot) {
    long tmp;
    while (num > 0) {
        tmp = num % 2;
        mptxt.push_back(tmp);
        num /= 2; 
    }
    mptxt.resize(16, 0);
}

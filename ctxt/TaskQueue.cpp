/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-18 17:28:21
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-18 18:41:09
 * @FilePath: /CLA/ctxt/TaskQueue.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "TaskQueue.h"

Task::Task(const helib::Ctxt& c1, const helib::Ctxt& c2, const helib::Ctxt& c3, helib::Ctxt& r1, helib::Ctxt& r2) : c1(c1), c2(c2), c3(c3), r1(r1), r2(r2) {}

TaskQueue::TaskQueue(const CtxtVector& ctxt1, const CtxtVector& ctxt2, const CtxtVector& ctxt3, CtxtVector& res1, CtxtVector& res2) {
    for (int i = 0; i < ctxt1.mctxt.size(); ++i) {
        
    }
}
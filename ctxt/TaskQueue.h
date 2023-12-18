/*
 * @Author: Zu Xixin 2665954635@qq.com
 * @Date: 2023-12-18 11:14:20
 * @LastEditors: Zu Xixin 2665954635@qq.com
 * @LastEditTime: 2023-12-18 17:24:36
 * @FilePath: /CLA/ctxt/TaskQueue.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <thread>
#include <helib/FHE.h>
#include <CtxtVector.h>

class Task {
    public:
    helib::Ctxt c1;
    helib::Ctxt c2;
    helib::Ctxt c3;
    helib::Ctxt r1;
    helib::Ctxt r2;
    Task(const helib::Ctxt& c1, const helib::Ctxt& c2, const helib::Ctxt& c3, helib::Ctxt& r1, helib::Ctxt& r2);
    void doTask();
};


class TaskQueue {
    public:
    std::vector<Task> Queue; 
    TaskQueue(const CtxtVector& ctxt1, const CtxtVector& ctxt2, const CtxtVector& ctxt3, CtxtVector& res1, CtxtVector& res2);
};
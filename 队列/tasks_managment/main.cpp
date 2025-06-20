#include <iostream>
#include <format>
#include <cstdlib> 
#include <chrono>
#include <thread>
#include "queue.h"
using std::cout, std::format;
using hbutds::queue;

void spawn_tasks(queue<int>& task_queue){
    const int task_num {std::rand() % 3}; // 随机产生0-2个任务
    for(int i=0; i<task_num; ++i){
        const int id {std::rand()};
        task_queue.push(id);
        cout<<format("Task No.{} is spawned.\n", id);
    }
}

void run_task(queue<int>& task_queue){
    if(!task_queue.empty()){
        const int id {task_queue.front()};
        task_queue.pop();
        cout<<format("Running Task No.{} ...\n", id);

        // 暂停1秒，假装在执行任务
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }else{
        cout<<"No tasks now.\n";
    }
}

auto main() ->int {
    std::srand(0);
    queue<int> task_queue;

    for(;;){
        spawn_tasks(task_queue); // 生成任务
        run_task(task_queue);    // 执行任务
    }

    return 0;
}
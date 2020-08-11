#pragma once
#include <iostream>
#include <vector>
#include "task.h"
#include "vm.h"

class broker
{
private:
    std::vector<Task> tasks;
    std::vector<Vm> vms;
public:
    void addTask(Task task){
        tasks.push_back(task);
    }
    void addTasks(std::vector<Task> t)    {
        tasks.insert(tasks.end(),t.begin(),t.end());
    }
};
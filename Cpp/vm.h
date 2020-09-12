#pragma once
#include <iostream>
#include <vector>
#include "task.h"

class Vm
{
public:
   //Instead of a boolean isAvailable variable, assignedTasks vector size can be used to delcare if vm is being used
    double pricePerHour = 0.051;
    double mipsCapacity = 1000;
    long numberOfPes = 2;
    std::vector<Task> assignedTasks;
    
    void assaignTask(Task task){
        assignedTasks.push_back(task);
    }

    float run(){
        float executionTime;
        for (auto &&task : assignedTasks){
            assignedTasks.erase(assignedTasks.begin());
            executionTime = executionTime + task.mips / mipsCapacity;
        }
        printf("Seconds: %f", executionTime);
        return executionTime;
    }
};
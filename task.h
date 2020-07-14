#include <iostream>
#include "vm.h"
#pragma once
class Task
{
public:
    long mips;
    Vm vm;

    void run(){
        float seconds = mips/vm.mipsCapacity;
        printf("Seconds %f",seconds);
    }
};
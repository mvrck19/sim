#include <iostream>
#include "task.h"
#include "vm.h"

int main()
{
    Vm newvm = Vm();
    Task taskOne = Task();
    taskOne.mips=1000;
    Task taskTwo = Task();
    taskTwo.mips = 1000;
    newvm.assaignTask(taskOne);
    newvm.assaignTask(taskTwo);
    newvm.run();
}

//TODO CreateTask, CreateVm functions maybe usefull
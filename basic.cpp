#include <iostream>
#include "task.h"
#include "vm.h"

int main()
{
    Vm newvm = Vm();
    Task newtask = Task();
    newtask.mips=1000;
    newtask.run();
}

//TODO CreateTask, CreateVm functions maybe usefull
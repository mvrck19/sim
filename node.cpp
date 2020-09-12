#pragma once
#include <iostream>
#include "task.h"
using namespace std;
stru Node
{
public:
    Task task;
    Node parent;
    Node[] sons;
};
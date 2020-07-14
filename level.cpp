#include <iostream>
#include <vector>
#include "task.h"

class Level
{
public:
    std::vector<Task> tasks;
    std::vector<Level> next;
};
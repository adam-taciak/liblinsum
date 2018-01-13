#include "universe.h"
#include <iostream>

void Universe::show()
{
    std::cout << "content of universe" << std::endl;

    for (int i = 0; i < this->list.size(); ++i)
    {
        std::cout << this->list.at(i) << std::endl;
    }
}

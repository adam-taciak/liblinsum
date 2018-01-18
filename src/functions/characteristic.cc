#include "characteristic.h"

#include <iostream>

double Characteristic::y(double x)
{
    if (x > 0)
    {
        return 1.0;
    }
    else
    {
        return 0.0;
    }
}

void Characteristic::show()
{
    std::cout << "Characteristic membership function" << std::endl;
}

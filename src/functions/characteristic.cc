#include "characteristic.h"

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
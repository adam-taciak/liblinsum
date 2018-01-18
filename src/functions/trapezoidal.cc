#include "trapezoidal.h"

#include <iostream>

Trapezoidal::Trapezoidal()
{
    //
}

Trapezoidal::Trapezoidal(double a, double b, double c, double d)
{
    if (a > b || b > c || c > d)
    {
        throw "Incorrect arguments";
    }

    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

double Trapezoidal::y(double x)
{
    if (x >= this->a && x <= this->b)
    {
        // The X is between A and B
        double _a = (1.0 - 0.0) / (this->b - this->a);
        double _b = 0.0 - _a * this->a;

        double y = (_a * x) + _b;
        return y;
    }

    if (x >= this->b && x <= this->c)
    {
        // The X is between B and C
        return 1.0;
    }

    if (x >= this->c && x <= this->d)
    {
        // The X is between C and D
        double _a = (1.0 - 0.0) / (this->d - this->c);
        double _b = 0.0 - _a * this->c;

        double y = (_a * x) + _b;
        return y;
    }

    return 0.0;
}

void Trapezoidal::show()
{
    std::cout << "Trapezoidal membership function with" << std::endl;
    std::cout << "A = " << this->a << " B = " << this->b << " C = " << this->c  << " D = " << this->d << std::endl;
}

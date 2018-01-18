#include "triangular.h"

#include <iostream> // TODO: remove me

Triangular::Triangular()
{
    //
}

Triangular::Triangular(double a, double b, double c)
{
    // Sanity checks
    if (a > b || b > c)
    {
        throw "Incorrect values";
    }

    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangular::y(double x)
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
        double _a = (0.0 - 1.0) / (this->c - this->b);
        double _b = 1.0 - _a * this->b;

        double y = (_a * x) + _b;
        return y;
    }

    return 0.0;
}

void Triangular::show()
{
    std::cout << "Triangular membership function with" << std::endl;
    std::cout << "A = " << this->a << " B = " << this->b << " C = " << this->c << std::endl;
}
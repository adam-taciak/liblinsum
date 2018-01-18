#ifndef __TRAPEZOIDAL_H_INCLUDED__
#define __TRAPEZOIDAL_H_INCLUDED__

#include "membership_function.h"

class Trapezoidal: public MembershipFunction
{
    public:
        Trapezoidal();
        Trapezoidal(double a, double b, double c, double d);
        double y(double x);
        void show();

    private:
        double a;
        double b;
        double c;
        double d;
};

#endif
#ifndef __TRIANGULAR_H_INCLUDED__
#define __TRIANGULAR_H_INCLUDED__

#include "membership_function.h"

class Triangular: public MembershipFunction
{
    public:
        double y(double x);
};

#endif
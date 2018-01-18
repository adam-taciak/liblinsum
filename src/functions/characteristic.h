#ifndef __CHARACTERISTIC_H_INCLUDED__
#define __CHARACTERISTIC_H_INCLUDED__

#include "membership_function.h"

class Characteristic: public MembershipFunction
{
    public:
        double y(double x);
        void show();
};

#endif

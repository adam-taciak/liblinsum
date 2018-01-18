#ifndef __TRIANGULAR_H_INCLUDED__
#define __TRIANGULAR_H_INCLUDED__

#include "membership_function.h"

class Triangular: public MembershipFunction
{
    public:
        Triangular();
        Triangular(double a, double b, double c);

        /*!
         *
         */
        double y(double x);
        void show();

    private:
        double a;
        double b;
        double c;
};

#endif
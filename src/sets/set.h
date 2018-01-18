#ifndef __SET_H_INCLUDED__
#define __SET_H_INCLUDED__

#include "../universe/universe.h"
#include "../functions/membership_function.h"

class Set
{
    public:
        virtual bool is_empty() = 0;
        virtual bool is_normal() = 0;
        virtual double y(double x) = 0;

        void set_universe(Universe *universe);
        void set_membership_function(MembershipFunction *function);

        MembershipFunction *get_membership_function();

    protected:
        Universe *universe;
        MembershipFunction *function;
};

#endif

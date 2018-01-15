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

        virtual void add_universe(Universe *universe) = 0;
        virtual void add_membership_function(MembershipFunction *function) = 0;

    protected:
        Universe *universe;
        int number_of_allowed_functions;
        std::vector<MembershipFunction *> *functions;

};

#endif

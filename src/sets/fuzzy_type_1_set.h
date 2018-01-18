#ifndef __FUZZY_TYPE_1_SET_H_INCLUDED__
#define __FUZZY_TYPE_1_SET_H_INCLUDED__

#include "set.h"

class FuzzyType1Set: public Set
{
    public:
        FuzzyType1Set();

        bool is_empty();
        bool is_normal();
        double y(double x);

        // void add_universe(Universe *universe);
        // void add_membership_function(MembershipFunction *function);
};

#endif
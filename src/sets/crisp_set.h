#ifndef __CRISP_SET_H_INCLUDED__
#define __CRISP_SET_H_INCLUDED__

#include "set.h"

class CrispSet: public Set
{
    public:
        CrispSet();
        double y(double x);
        bool is_empty();
        bool is_normal();
        
        // void add_universe(Universe *universe);
        // void add_membership_function(MembershipFunction *function);
};

#endif

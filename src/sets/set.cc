#include "set.h"

void Set::set_universe(Universe *universe)
{
    if (this->universe)
    {
        delete this->universe;
    }

    this->universe = universe;
}

void Set::set_membership_function(MembershipFunction *function)
{
    if (this->function)
    {
        delete this->function;
    }

    this->function = function;
}

MembershipFunction *Set::get_membership_function()
{
    return this->function;
}
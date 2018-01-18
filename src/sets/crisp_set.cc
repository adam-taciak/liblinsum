#include "crisp_set.h"

#include <iostream>

CrispSet::CrispSet()
{
    this->number_of_allowed_functions = 1;
    this->universe = NULL;
    this->functions = NULL;
}

double CrispSet::y(double x)
{
    double value = 0;
    // Check if a given value exists in the universe
    for (unsigned int i = 0; i < this->universe->get_list().size(); ++i)
    {
        // std::cout << i << " " << this->universe->get_list()[i] << std::endl;
        if (x == this->universe->get_list()[i])
        {
            value = x;
            break;
        }
    }

    // Puth the value to the membership function
    return this->functions->at(0)->y(x);

    return 0.0;
}

bool CrispSet::is_empty()
{
    return false;
}

bool CrispSet::is_normal()
{
    return false;
}

void CrispSet::add_universe(Universe *universe)
{
    if (this->universe)
    {
        delete this->universe;
    }

    this->universe = universe;
}

void CrispSet::add_membership_function(MembershipFunction *function)
{
    if (!this->functions)
    {
        this->functions = new std::vector<MembershipFunction *>();
    }

    // Sanity check
    if (this->functions->size() > 1)
    {
        throw std::range_error("This kind of membership function can have only one funtion!");
    }

    this->functions->push_back(function);
}

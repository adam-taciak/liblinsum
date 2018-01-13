#ifndef __DISCRETE_H_INCLUDED__
#define __DISCRETE_H_INCLUDED__

#include "universe.h"

class Discrete : public Universe
{
    public:
        void add_element(double element);
};

#endif
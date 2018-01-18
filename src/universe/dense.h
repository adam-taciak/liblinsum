#ifndef __DENSE_H_INCLUDED__
#define __DENSE_H_INCLUDED__

#include "universe.h"

#define DENSE_POPULATE_STEP 0.5

class Dense : public Universe
{
    public:
        Dense(): min_boundry(0.0), max_boundry(0.0) { };
        Dense(double min, double max);
        void set_boundry(double min, double max);

    private:
        
        double min_boundry;
        double max_boundry;

        void populate();
};

#endif

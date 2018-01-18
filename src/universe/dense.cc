#include "dense.h"

// Dense::Dense()
// {
// }

Dense::Dense(double min, double max)
{
    this->min_boundry = min;
    this->max_boundry = max;
}

void Dense::set_boundry(double min, double max)
{
    // Sanity check
    if (min > max)
    {
        // Throw an exception

    }

    this->min_boundry = min;
    this->max_boundry = max;

    this->populate();
}

void Dense::populate()
{
    // Remove the old elements
    this->list.clear();

    double element = this->min_boundry;
    while (element <= this->max_boundry)
    {
        this->list.push_back(element);
        element += DENSE_POPULATE_STEP;
    }
}

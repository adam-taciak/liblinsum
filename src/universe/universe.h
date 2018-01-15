#ifndef __UNIVERSE_H_INCLUDED__
#define __UNIVERSE_H_INCLUDED__

#include <vector>

class Universe
{
    public:
        void show();
        std::vector<double> get_list();

    protected:
        std::vector<double> list;
};

#endif

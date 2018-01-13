#include <iostream>

#include "universe/dense.h"
#include "universe/discrete.h"

int main(int argc, char *argv[])
{

    Dense dense = Dense();
    Discrete discrete = Discrete();

    dense.set_boundry(2.0, 9.0);
    dense.show();

    discrete.add_element(1.2);
    discrete.add_element(2.2);
    discrete.add_element(3.2);
    discrete.show();

    return 0;
}

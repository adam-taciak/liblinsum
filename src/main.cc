#include <iostream>

#include "universe/dense.h"
#include "universe/discrete.h"

#include "functions/membership_function.h"
#include "functions/characteristic.h"
#include "functions/triangular.h"


#include "sets/crisp_set.h"

int main(int argc, char *argv[])
{
    double y;

    Dense dense = Dense();
    Discrete discrete = Discrete();

    dense.set_boundry(2.0, 9.0);
    // dense.show();

    discrete.add_element(1.2);
    discrete.add_element(2.2);
    discrete.add_element(3.2);
    // discrete.show();

    Triangular triangular = Triangular();
    Characteristic characteristic = Characteristic();

    CrispSet crisp_set = CrispSet();
    crisp_set.add_universe(&dense);
    crisp_set.add_membership_function(&characteristic);
    y = crisp_set.y(4.5);

    std::cout << y << std::endl;

    return 0;
}

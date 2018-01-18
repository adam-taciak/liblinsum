#include <iostream>
#include <vector>

#include "universe/dense.h"
#include "universe/discrete.h"

#include "functions/membership_function.h"
#include "functions/characteristic.h"
#include "functions/triangular.h"
#include "functions/trapezoidal.h"


#include "sets/crisp_set.h"
#include "sets/fuzzy_type_1_set.h"

int main(int argc, char *argv[])
{
    double y;

    std::vector<MembershipFunction *> *f;

    Dense dense = Dense();
    Discrete discrete = Discrete();

    dense.set_boundry(2.0, 9.0);
    // dense.show();

    discrete.add_element(1.2);
    discrete.add_element(2.2);
    discrete.add_element(3.2);
    // discrete.show();

    Triangular triangular = Triangular(2.0, 4.0, 6.0);
    Characteristic characteristic = Characteristic();

    CrispSet crisp_set = CrispSet();
    crisp_set.set_universe(&dense);
    crisp_set.set_membership_function(&characteristic);
    // y = crisp_set.y(4.5);

    FuzzyType1Set fuzzy_type_1_set = FuzzyType1Set();
    fuzzy_type_1_set.set_universe(&dense);
    fuzzy_type_1_set.set_membership_function(new Triangular(2.0, 4.0, 6.0));
    fuzzy_type_1_set.get_membership_function()->show();

    return 0;
}

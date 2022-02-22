#include <iostream>

void dynamic_ind() {
    int *arrow;
    int *dynamic_ind;
    dynamic_ind = new int[10];

    arrow = dynamic_ind;
    for (int iter = 0; iter < 10; ++iter) {
        *arrow = iter * iter;
        ++arrow;
    }
 
    arrow = dynamic_ind;
    for (int iter = 0; iter < 10; ++iter) {
        std::cout << '\t' << "number is " << *arrow << '\n';
        ++arrow;
    }

    delete [] dynamic_ind;
}

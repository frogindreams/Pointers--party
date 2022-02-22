#include <iostream>

void static_ind() {
    int *arrow;
    int static_ind[10];

    arrow = static_ind;
    for (int iter = 0; iter < 10; ++iter) {
        *arrow = iter * iter;
        ++arrow;
    }

    arrow = static_ind;
    for (int iter = 0; iter < 10; ++iter) {
        std::cout << '\t' << "number is " << *arrow << '\n';
        ++arrow;
    }
}

#include <iostream>

void dynamic_ind() {
    int *dynamic_ind = new int[10];

    for (int iter = 0; iter < 10; ++iter) { *(dynamic_ind + iter) = iter * iter; }
 
    for (int iter = 0; iter < 10; ++iter) { std::cout << '\t' << "number is " << *(dynamic_ind + iter) << '\n'; }

    delete [] dynamic_ind;
}

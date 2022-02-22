#include <iostream>

void dynamic_addr() {
    int *dynamic_addr;
    dynamic_addr = new int[10];

    for (int iter = 0; iter < 10; ++iter) {
        dynamic_addr[iter] = iter * iter;
    }

    for (int iter = 0; iter < 10; ++iter) {
        std::cout << '\t' << "number is " << dynamic_addr[iter] << '\n';
    }

    delete [] dynamic_addr;
}

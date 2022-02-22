#include <iostream>

void static_addr() {
    int static_addr[10];

    for (int iter = 0; iter < 10; ++iter) {
        static_addr[iter] = iter * iter;
    }

    for (int iter = 0; iter < 10; ++iter) {
        std::cout << '\t' << "number is " << static_addr[iter] << '\n';
    }
}

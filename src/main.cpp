#include <stdio.h>
#include "unstd/unstd.h"
#include "lsal/Lsal.h"

int main() {
    printf("the static-addr method:\n");
    static_addr();
    
    printf("\nthe static-ind method:\n");
    static_ind();
    
    printf("\nthe dynamic-addr method:\n");
    dynamic_addr();
    
    printf("\nthe dynamic-ind method:\n");
    dynamic_ind();

    printf("\nthe linear self-addressing list:\n");
    
    Lsal lsal;
    for (int iter = 9; iter >= 0; --iter) { lsal.CreateNode(iter); }
    lsal.print();
    lsal.clear();

    return 0;
}

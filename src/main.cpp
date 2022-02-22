#include <stdio.h>
#include "unstd.h"

int main() {
    printf("the static-addr method:\n");
    static_addr();
    
    printf("\nthe static-ind method:\n");
    static_ind();
    
    printf("\nthe dynamic-addr method:\n");
    dynamic_addr();
    
    printf("\nthe dynamic-ind method:\n");
    dynamic_ind();

    /*
     *
     *
     */
}

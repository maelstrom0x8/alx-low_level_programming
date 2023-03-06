#include "main.h"
#include <stdio.h>

void print_chessboard(char (*a)[8])
{
    int i;
    
    for(i=0; i < 8; ++i) {
        while((*a)[i] != '\0'){
            printf("%s", ((*a)[i]));
            ++((*a)[i]);
        }
        putchar('\n');
    }
    
    
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, int* argv[]) {

    int result;
    int* x = argv[0];

    int* op = argv[1];
    int* y = argv[2];


    if ( !argc == 4 ) {
        printf(" Enter An Math Equation Ex: 1+4");
        return 1;
    }

    

    return 0; 
}


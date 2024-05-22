#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int math(int x, int op, int y){
    switch (op) {
    case 42: //*
        return(x * y);
    case 43: //+
        return(x + y);
    case 45: //-
        return(x - y);
    case 47:  // /
        return(x / y);    
    case 61: //=
        if (x == y){
            return true;
        } else {
            return false;
        }
    default:
        puts("Enter valid expression, (* / - + = )");
        exit(-1);
    }
}

int main(int argc, char* argv[]){
    if (argc != 4) {
        printf("Enter An Math Equation Ex: 1 + 4 \n");
        return -1;
    }

    int x = 0;
    int y = 0;
    char op = *argv[2];
    // printf("Argc = %i\n", argc);

    x = atoi(argv[1]);
    y = atoi(argv[3]);

    // printf("%i\n", x);
    // printf("%i\n", y);

    printf("%i\n",math(x,op,y));

    // int *cool = (int*)malloc(sizeof(int));

    // if (cool == NULL){
    //     puts("Heap Failed!");
    //     return -1;
    // } else {
    //     printf("Successfuly allocated memory! \n");
    // }
    // for (i = 0; i < n; ++i) {
    //     cool[i] = i + 1;
    // }
    // printf("The elements of the array are: ");
    // for (i = 0; i < n; ++i) {
    //     printf("%d, ", cool[i]);
    // }
    

    // free(cool);
    return 0;
}

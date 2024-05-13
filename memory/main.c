#include <stdio.h>
#include <stdlib.h>

int math(int x, int op, int y){
    switch (op) {
    case 42: 
        return(x * y);
    case 43: 
        return(x + y);
    case 45: 
        return(x - y);
    case 47: 
        return(x / y);
    }
}

int main(int argc, char* argv[]){
    printf("Argc = %i\n", argc);
    // if (argc != 4) {
    //     printf("Enter An Math Equation Ex: 1 + 4");
    //     return -1;
    // }

    for (int i = 0; i < sizeof(argv[i]); i++){
        printf("%i\n", *argv[i]);
    }
    int i;

    int x = *argv[1] - '0';
    // printf("%d\n", x);

    int op = (int)*argv[2]; 
    // printf("%d\n", op);

    int y = *argv[3] - '0';
    // printf("%d\n", y);

    // printf("The ASCII value of %c is %d \n", *argv[1], *argv[1]);

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

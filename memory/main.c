#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    default:
        return 0;
    }
}

int main(int argc, char* argv[]){
    int  i, ii;
    int x = 0;
    int y = 0;
    printf("Argc = %i\n", argc);

    if (argc != 4) {
        printf("Enter An Math Equation Ex: 1 + 4 \n");
        return -1;
    }
    int lenX = strlen(argv[1]);
    int lenY = strlen(argv[3]);

	for(i=0; i<lenX; i++){
		x = x * 10 + ( (int)argv[i] - '0' );
	}

	for(ii=0; ii<lenY; ii++){
		y = y * 10 + ( (int)argv[ii] - '0' );
	}

    printf("%i\n", x);
    printf("%i\n", y);
    // printf("%i\n",math(x,op,y));

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

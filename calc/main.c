#include <stdio.h>
#include <stdlib.h>

double main(int argc, char** argv[]) {

    double result;
    
    printf("%s\n", argv[2]);
    printf("%i\n", argc);

    if () {
        printf(" Enter An Math Equation Ex: 1+4");
        return 1;
    }


    switch (argv[])
    {
    case 42:
        result = argv[1] *;
        break;
    case 43:
        result = x + z;
        break;
    case 45:
        result = x - z;
        break;
    case 47:
        result = x / z;
        break;  
    default:
        break;
        printf("Invaild Expression! \n");
        return 1;
    }
    printf("%d", result);
    return 0; 
}
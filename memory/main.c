#include <stdio.h>
#include <stdlib.h>

int math(int x, int operator, int y){
    switch (operator) {
    case '*': //*
        return(x * y);
    case '+': //+
        return(x + y);
    case '-': //-
        return(x - y);
    case '/':  // /
        if (y == 0) {
        puts("Error: Division by zero");
        exit(-1);
    }
        return(x / y);    
    default:
        puts("Enter a valid operatorerator (* / - +)");
        exit(-1);
    }
}

int main(int argc, char* argv[]){
    if (argc != 4) {
        printf("Enter An Math Equation Ex: 1 + 4 \n");
        return -1;
    }

    int x;
    int y;
    char operator = argv[2][0];

    x = atoi(argv[1]);
    y = atoi(argv[3]);

    printf("%i\n",math(x,operator,y));
    return 0;
}

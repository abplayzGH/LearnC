#include <stdio.h>
#include <stdlib.h>

double calcSlope(double x1, double y1, double x2, double y2);
int math(int x, int operator, int y);

int main(int argc, char* argv[]){
    if (argc = 1) {
        printf("Enter An Math Equation Ex: 1 + 4 \n");
        return -1;
    }

    char operator = argv[2][0];

    int x = atoi(argv[1]);
    int y = atoi(argv[3]);

    printf("%i\n",math(x,operator,y));
    return 0;
}

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

double calcSlope(double x1, double y1, double x2, double y2){
    return (y2 - y1) / (x2 - x1);
}
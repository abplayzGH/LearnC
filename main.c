#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); 

    int i = 1;

    while (i < 20) {

        char c = rand() % 127;
        printf("%c\n",c);
        i++;
    }
    return 0;   
}
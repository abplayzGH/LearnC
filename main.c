#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); 

    int i = 1;
    for (int j = 0; j < 10; j++){
        while (i < 40) {

            char c = rand() % 127;
            printf("%c",c);
            i++;
        }
        // printf("\n");
    }
    return 0;   
}
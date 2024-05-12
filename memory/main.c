#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    int *cool = (int*)malloc(sizeof(int));
    if (cool == NULL){ puts("Heap Failed!"); return -1;}
    

    free(cool);
    return 0;
}

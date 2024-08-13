#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {

    if (argc != 3){ return 1; }

    FILE *source = fopen(argv[1], "rb");
    FILE *dest = fopen(argv[2], "wb");

    if (source == NULL || dest == NULL) { return 1;}

    BYTE buffer;

    while( fread(&buffer, sizeof(buffer), 1, source)){
        fwrite(&buffer, sizeof(buffer), 1, dest);
    }



    fclose(source);
    fclose(dest);
    return 0;
}
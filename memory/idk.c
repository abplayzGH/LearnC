#include <stdio.h>
#include <stdlib.h>
int math(int x, int op, int y){
    switch (op) {
    case '*': //*
        return(x * y);
    case '+': //+
        return(x + y);
    case '-': //-
        return(x - y);
    case '/':  // /
        return(x / y);    
    default:
        puts("Enter valid expression, (* / - + = )");
        exit(-1);
    }
}

int main(int argc, char* argv[])
{
    if (argc != 4){
        printf("Enter There Arguments");
        return -1;
    }
	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	n = argc;


	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = atoi(argv[i]);
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

        output = math(ptr[2], argv[2], ptr[4]);
        printf("Answer: %d", output);
	}

	return 0;
}

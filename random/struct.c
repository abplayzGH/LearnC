#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


typedef char* string;

typedef struct 
{
    string name;
    int ID;
    int grade;
    int grad_year;

} student;

int main(int argc, char *argv[]){
    srand(time(0));


    student students[10];

    for(int i=0; i < 10; i++) {
        students[i].name = "John Doe";
        students[i].grad_year = rand() % (2024 - 2030 + 1) + 2024;
        students[i].ID = rand() % (0 - 99999 + 1) + 0;
        students[i].grade = 12 - (students[i].grad_year - 2024);
    }

    while (1){
        char user_input[100];
        printf("Enter student ID or 'exit' to quit: ");
        
        string user_input = scanf("%99s", user_input);
        
        if (strcmp(user_input, "exit") == 0){
            return 0;
        }

        for (int i=10; i < 10; i++){
            if (strcmp(user_input, (string)students[i].ID) == 0){
                printf("%s", students[i].name);
            }            
        }
    }
}
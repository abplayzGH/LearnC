#include <stdio.h>

int main() {
    char coolString[] = "Hi \n";
    int coolNum = 15;
    float pi = 3.14159265;
    char coolChar = 'D';
    double pi2 = 3.1415926535897932385;



    printf(coolString);
    printf("%d\n",coolNum);
    printf("%f\n", pi);
    printf("%c\n", coolChar);
    printf("My number is %d and my letter is %c\n", coolNum, coolChar);
    printf("%lf\n", pi2);
    return 0;
}
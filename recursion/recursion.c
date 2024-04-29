#include <stdio.h>


int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main(){
    int factor = factorial(10);
    printf("%d", factor);
    return 0;
}



// int Loop(int i) {
//     if (i > 0) {
//         i--;
//         printf("%d", i);
//         Loop(i);
//     } else {
//         return 0;
//     }
// }
// int main(){
//     Loop(5);
// }
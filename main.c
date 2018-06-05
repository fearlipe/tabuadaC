#include <stdio.h>
int main() {
     int num, i, mult;
     
     printf("Digite um número inteiro:\n");
     scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
         mult = num * i;
         printf("%d x %d = %d\n", num, i, mult);
     }
     
     return 0;
}

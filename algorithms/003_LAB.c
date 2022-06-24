#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int A, B;
  
    printf("Digite um valor para A: ");
    scanf("%d", &A);
  
    printf("Digite um valor para B: ");
    scanf("%d", &B);
  
    if (A > B) {
        printf("%d, é maior que %d", A, B);
    }else {
        printf("%d, é maior que %d\n", B, A);
    }
  
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, soma;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);

    if (a < b){
        for(i = 1 + 1; i < b; i++){
            printf("%d", i);
        }
    i = i * (i/2);
    soma = i;
    printf("\nSoma = %d", soma);
    }

    if(a == b){
        printf("Nao ha intervalos");
    }

    if(b < a){
        for(i = 1 + 1; i < a; i++){
            printf("%d", i);
        }
    i = i * (i/2);
    soma = i ;
    printf("\nSoma = %d", soma);
    }

    return 0;
}

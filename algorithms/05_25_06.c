#include <stdio.h>

int main()
{
    int a, b, i;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);

    for(i = 1 + 1; i < b; i++){
        if (a < b){
            printf("%d", i);
        }
    }

    if(a == b){
        printf("Nao ha intervaloS");
    }

/* if(b < a){
        for(i = 1 + 1; i < a; i++){
            printf("%d", i);
        }
    }


*/
    return 0;
}

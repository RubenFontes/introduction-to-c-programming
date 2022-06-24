#include <stdio.h>

int main()
{
    int a1, atual, razao_a, razao_g, PA;

    printf("Qual o primeiro termo? ");
    scanf("%d", &a1);
    printf("Qual o segundo termo? ");
    scanf("%d", &atual);

    razao_g = atual - a1;
    PA = 1;

    do{
        a1 = atual;
        printf("Qual o proximo termo? ");
        scanf("%d", &atual);
        razao_a = atual - a1;

        if (atual != -1 && razao_a != razao_g){
            PA = 0;
        }
    }while(atual != -1);

    if (PA == 1){
        printf("Foi uma PA de razao %d.\n", razao_g);
    }else{
        puts("Nao foi PA.");
    }

    return 0;
}

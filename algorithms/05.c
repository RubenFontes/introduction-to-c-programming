#include <stdio.h>

int main()
{
    int n, ant_a, ant_b, atual, i;

    printf("Qual o valor de n: ");
    scanf("%d", &n);

    if (n == 1 || n == 2){
        printf("O termo %d eh %d.\n", n, 1);
    }else{
        ant_b = 1;
        ant_a = 1;
        for(i = 3; i <= n; i = i + 1){
            atual = ant_a + ant_b;
            ant_b = ant_a;
            ant_a = atual;
        }
        printf("O termo %d eh %d.\n", n, atual);
    }

    return 0;
}

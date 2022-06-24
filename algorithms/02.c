#include <stdio.h>
#include <math.h>

int main()
{
    char c;
    int a1, r, n, an, soma;

    printf ("Digite 'a' para PA ou 'g' para PG: ");
    scanf ("%c",&c);

    printf("Digite o valor do primeiro termo da progressao(a1): ");
    scanf("%d", &a1);
    printf("Digite o valor da razao: ");
    scanf("%d", &r);
    printf("Digite o numero de termos(n) da progressao: ");
    scanf("%d", &n);
    if(c == 'a')
    {
        an = (a1 + (n - 1)) * r;
        soma = (n * (a1 + an)) / 2;
        printf("a1: = %d \nan = %d \nr: = %d \n(n)termos: %d \nsoma dos termos = %d",a1, an, r, n, soma);
    }else{
        if(c == 'g')
        {
            an = (a1 * pow(r, n - 1))/ r - 1;
            soma = (a1 * (pow(r, n) - 1)) / (r - 1);
            printf("a1: = %d \nan = %d \nr: = %d \n(n)termos: %d \nsoma dos termos = %d",a1, an, r, n, soma);
        }
    }

    return 0;
}

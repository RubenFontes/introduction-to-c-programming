#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    float media; 
    
    printf("Insira o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira o valor da segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira o valor da terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A sua média foi: %.1f ", media);

    system("pause");
    return 0;
}
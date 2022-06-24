#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char sexo;
    float altura, peso_correto;
  
    printf("Qual o seu sexo (h/m)? ");
    scanf("%c",&sexo);
  
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
  
    if (sexo == 'h') {
        peso_correto = (72.7 * altura) - 58;
    }else{
        peso_correto = (62.1 * altura) - 44.7;
    }
  
    printf("O peso ideal para um(a) %c de altura: %.2f é %f\n", sexo, altura, peso_correto);
  
    return 0;
}
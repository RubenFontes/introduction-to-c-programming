#include <stdio.h>

int main(void){
    char sexo;
    float altura, pesoIdeal;

    printf("Digite seu sexo, (h)omem ou (m)ulher: ");
    scanf("%c", &sexo);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if (sexo == 'h'){
        pesoIdeal = (72.7 * altura) - 58;
    }else{
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("O peso ideal para um(a) %c de altura %.2f eh: %.1fkg\n", sexo,  altura, pesoIdeal);

    return 0;
}

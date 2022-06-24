#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2; 

    printf("Digite o valor de A: ");  
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);
   
    if (a == 0) {
        printf("Os coeficientes não formam uma equação do segundo grau");
        return 1;
    }else{
        delta = (b*b) - (4*a*c);
        if (delta < 0) {
            printf("A equação não possui raízes reais");
            return 2;
        }else{ 
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("x1 = %.1f, x2 = %.1f\n", x1, x2);
        }
    }

    return 0;
}
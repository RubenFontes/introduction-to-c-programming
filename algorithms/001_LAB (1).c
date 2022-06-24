#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> 

int main()
{

    setlocale(LC_ALL, "portuguese-brazilian");

    float altura;
    float largura;
    int demaos;
    int metros_por_litro;
    float qntd_latas;   
    int qntd_latas_final;

    printf("Bem vindo ao calculador de latas de tinta! ");
    printf("\nPara as perguntas a seguir, informe os valores em metros. \nNão é preciso declarar a unidade(m, cm, mm,)");

    printf("\nQual a altura da parede? ");
    scanf("%f", &altura);

    printf("\nQual a largura dessa parede? ");
    scanf("%f", &largura);

    printf("\nQual o número de demaos que será usado? ");
    scanf("%d", &demaos);

    printf("\nQual o valor da relação(m²/l) que sua lata pode pintar? ");
    scanf("%d", &metros_por_litro);

    qntd_latas = (altura * largura) * (demaos)/(metros_por_litro);
    qntd_latas_final = ceil(qntd_latas);

    printf("Você precisará de %d latas de tinta!", qntd_latas_final);    

    return 0;
}
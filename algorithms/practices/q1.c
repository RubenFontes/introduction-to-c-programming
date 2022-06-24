/**
 ============================================================================
 Nome      : q1_intervalo.c
 Autor     : Ruben
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : imprime 10 números pares no intervalo [20,2]
 ============================================================================
 */
#include <stdio.h>
int main(){
    int i=22; /*variável que receberá o valor inicial do intervalo*/
    while(i<=22&&i>2){ /*laço de repetição, irá executar as instruções
        do corpo enquanto a condição presente dentro do parenteses for
        verdadeira, isto é, enquanto "i" atedner ao valor incial atribuido a ele*/
        i-=3; /*a variavel "i" será decrescida(-) de 3*/
        i+=1;  /*a variavel "i" será acrescida(+) de 1*/
        /*(22 - 3 = 19, 19 + 1 = 20 ) essa expressão será o primiro termo do
        intervalo que atende a condição. O último termo será --> 4(que ainda é maior que '2') - 3 + 1, que é igual a 2*/
        printf("%d\n",i); /*todos os termos do intervalo*/
    }
    return 0;
}

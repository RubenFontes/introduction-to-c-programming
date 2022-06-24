/**
 ============================================================================
 Nome      : q1_intervalo.c
 Autor     : Ruben
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : imprime 10 n�meros pares no intervalo [20,2]
 ============================================================================
 */
#include <stdio.h>
int main(){
    int i=22; /*vari�vel que receber� o valor inicial do intervalo*/
    while(i<=22&&i>2){ /*la�o de repeti��o, ir� executar as instru��es
        do corpo enquanto a condi��o presente dentro do parenteses for
        verdadeira, isto �, enquanto "i" atedner ao valor incial atribuido a ele*/
        i-=3; /*a variavel "i" ser� decrescida(-) de 3*/
        i+=1;  /*a variavel "i" ser� acrescida(+) de 1*/
        /*(22 - 3 = 19, 19 + 1 = 20 ) essa express�o ser� o primiro termo do
        intervalo que atende a condi��o. O �ltimo termo ser� --> 4(que ainda � maior que '2') - 3 + 1, que � igual a 2*/
        printf("%d\n",i); /*todos os termos do intervalo*/
    }
    return 0;
}

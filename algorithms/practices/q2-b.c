#include <stdio.h>

int main()
{
    char letra;

    letra = 'a'; /*� atribuido 'a' a variavel 'letra'*/
    printf("%c", letra);

    letra = 'B';  /*� atribuido 'B' a variavel 'letra', em seguida � acrescido + 1
                (ao valor que corresponde a 'B' na tabela ascii) em repeti��o no
                intervalo['B', 'D'] ou [66, 68]*/
    for(letra = 'B'; letra <= 'D'; letra++){
        printf("%c", letra);
    }
    letra = 'e'; /*� atribuido 'e' a variavel 'letra'*/
    printf("%c", letra);

    letra = 'F'; /*� atribuido 'F' a variavel 'letra', em seguida � acrescido + 1
                (ao valor que corresponde de 'F' na tabela ascii) em repeti��o no
                intervalo['F', 'H'] ou [70, 72]*/
    for(letra = 'F'; letra <= 'H'; letra++){
        printf("%c", letra);
    }
    letra = 'i'; /*� atribuido 'i' a variavel 'letra'*/
    printf("%c", letra);

    letra = 'J'; /*� atribuido 'J' a variavel 'letra', em seguida � acrescido + 1
                (ao valor que corresponde de 'J' na tabela ascii) em repeti��o no
                intervalo['F', 'H'] ou [74, 78]*/
    for(letra = 'J'; letra <= 'N'; letra++){
        printf("%c", letra);
    }
    letra = 'o'; /*� atribuido 'o' a variavel 'letra'*/
    printf("%c", letra);

    letra = 'P';/*� atribuido 'P' a variavel 'letra', em seguida � acrescido + 1
                (ao valor que corresponde de 'P' na tabela ascii) em repeti��o no
                intervalo['F', 'H'] ou [80, 84]*/
    for(letra = 'P'; letra <= 'T'; letra++){
        printf("%c", letra);
    }
    letra = 'u'; /*� atribuido 'o' a variavel 'letra'*/
    printf("%c", letra);

    letra = 'V'; /*� atribuido 'v' a variavel 'letra', em seguida � acrescido + 1
                (ao valor que corresponde de 'v' na tabela ascii) em repeti��o no
                intervalo['F', 'H'] ou [86, 90]*/
    for(letra = 'V'; letra <= 'Z'; letra++){
        printf("%c", letra);
    }

    return 0;
}

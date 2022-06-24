#include <stdio.h>

int main()
{
    char letra; /*Na tabela ASCII, os caracteres do alfabeto correspondem
                a valores inteiros, e o tipo Char é capaz de armazenar pequenos valores inteiros na memoria*/
    for(letra = 'a'; letra <= 'z'; letra++){ /*Como a == 65 e z == 90(na tabela ascii), ao usar o laço de repetição "for" para
                                            executar uma instrução de acrescer + 1 no valor inicial de 'a', serão lidos todos os
                                            termos do intervalo['a', 'z'] ou [65, 90].
                                            Exemplo - 'a'(65)na primeira leitura, 'b'(66)na primeira repetição... 'z'(90)
                                            na última repetição*/
    printf("%c", letra);
    }
return 0;
}

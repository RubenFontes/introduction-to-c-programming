#include <stdio.h>

int main()
{
    char letra; /*Na tabela ASCII, os caracteres do alfabeto correspondem
                a valores inteiros, e o tipo Char � capaz de armazenar pequenos valores inteiros na memoria*/
    for(letra = 'a'; letra <= 'z'; letra++){ /*Como a == 65 e z == 90(na tabela ascii), ao usar o la�o de repeti��o "for" para
                                            executar uma instru��o de acrescer + 1 no valor inicial de 'a', ser�o lidos todos os
                                            termos do intervalo['a', 'z'] ou [65, 90].
                                            Exemplo - 'a'(65)na primeira leitura, 'b'(66)na primeira repeti��o... 'z'(90)
                                            na �ltima repeti��o*/
    printf("%c", letra);
    }
return 0;
}

/**
 ============================================================================
 Nome      : q1-senha.c
 Autor     : lincoln
 Versao    : 1.0 do-while
 Copyright : CC BY 4.0
 Descricao : Um programa que repete a leitura de uma senha até que ela seja
             válida. Para cada leitura de senha incorreta informada, exibe
             a mensagem "Senha Invalida". Quando a senha for informada
             corretamente exibe a mensagem "Acesso Permitido".
 ============================================================================
 */
#include <stdio.h>

int main(void){
    int senha; /* variavel para ler a senha */

    /* Acredito que o do-while seja mais apropriado para essa questao, pois
    sempre sera necessaria uma primeira leitura */
    do{
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != 2020){
            /* mensagem da senha incorreta */
            puts("Senha Invalida");
        }
    }while(senha != 2020);

    /* O programa soh sairah do laco quando a senha estiver correta,
    portanto eh seguro exibir logo a mensagem de Acesso Permitido. */
    puts("Acesso Permitido");

    return 0;
}

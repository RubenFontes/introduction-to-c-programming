#include <stdio.h>

int main()
{
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 2020)
    {
        puts("Senha invalida");
        printf("Tente novamente: ");
        scanf("%d", &senha);
    }if(senha == 2020){
        puts("Acesso permitido");
    }

    return 0;
}

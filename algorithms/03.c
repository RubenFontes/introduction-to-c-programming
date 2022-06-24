#include <stdio.h>

int main()
{
    int n=1;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    if (n == 2 || n == 3){
        puts("PRIMO");
        return 1;
    }
    if(n % 2 != 0 && n % 3 != 0){
        puts("PRIMO");
    }else{
        if(n % 2 == 0 || n % 3 == 0){
            puts("NAO E PRIMO");
    }
    }

    return 0;
}


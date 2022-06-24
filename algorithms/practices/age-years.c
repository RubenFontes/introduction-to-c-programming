#include <stdio.h>

int main(void){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ( 0 <= idade && idade < 21 ){
        puts("Jovem");
    }else{
        if ( 21 <= idade && idade < 60 ){
            puts("Adulto");
        }else{
            puts("Idoso");
        }
    }

    return 0;
}

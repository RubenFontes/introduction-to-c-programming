#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
  
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
  
    if (idade < 30) {
            puts("Você é jovem");
    }else{
        if (idade >= 30 && idade < 60) {
            puts("você é adulto");
    }else{
        puts ("Você é idoso");
    }
  }
}
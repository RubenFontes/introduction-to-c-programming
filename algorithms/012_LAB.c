#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinheiro;
	int n100 = 0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
	
	printf("Digite um valor em reais: ");
    scanf("%d", &dinheiro);

    while (dinheiro >= 100)
    {
        n100++;
        dinheiro = dinheiro - 100;
    }
    if(n100 > 0) printf("%d\n", n100);
    while (dinheiro    >= 50)
    {
        n50++;
        dinheiro = dinheiro - 50;
    }
    if(n50 > 0) printf("%d\n", n50);
    while (dinheiro    >= 20)
    {
        n20++;
        dinheiro = dinheiro - 20;
    }
    if(n20 > 0) printf("%d\n", n20);
    while (dinheiro    >= 10)
    {
        n10++;
        dinheiro = dinheiro - 10;
    }
    if(n10 > 0) printf("%d\n", n10);
    while (dinheiro    >= 5)
    {
        n5++;
        dinheiro = dinheiro - 5;
    }
    if(n5 > 0) printf("%d\n", n5);
    while (dinheiro    >= 2)
    {
        n2++;
        dinheiro = dinheiro - 2;
    }
    if(n2 > 0) printf("%d\n", n2);
    while (dinheiro    >= 1)
    {
        n1++;
        dinheiro = dinheiro - 1;
    }
    if(n1 > 0) printf("%d\n", n1);

    return 0;
}
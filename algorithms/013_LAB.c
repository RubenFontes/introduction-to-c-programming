#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altura, peso, imc;
	
	printf("Qual a sua altura: ");
	scanf("%f", &altura);
	printf("Qual o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso/(altura*altura);
    if (imc <= 18.5)
	{
		puts("Baixo peso");
	}else{
		if (imc > 18.5 && imc <=25)
		{
			puts("Peso normal");
		}
		if (imc > 25 && imc <=30)
		{
			puts("Sobrepeso");
		}
		if (imc > 30)
		{
			puts("Obesidade");
		}	
    }		

	return 0;
}
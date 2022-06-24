#include <stdio.h>
#include <stdlib.h>

int main(){
	int diametro, raio;
	float area, perimetro;
	
	printf("Digite o valor do diametro: ");
	scanf("%d", &diametro);
	
	raio = 2 * diametro;
	area = 3.14 * raio * raio;
	perimetro = 2 * 3.14 * raio;
	
	printf("\nRaio = %d\nArea = %.2f\nPerimetro = %.2f", raio, area, perimetro);

	return 0;	
}

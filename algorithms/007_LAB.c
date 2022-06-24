#include <stdio.h>
#include <stdlib.h>

int main(){
	int base, altura;
	float area;
	
	printf("Qual a base do triangulo? ");
	scanf("%d", &base);
	
	printf("Qual a altura do triangulo? ");
	scanf("%d", &altura);
    
	area = (base*altura)/2.0;
	printf("\nArea = %.2f", area);
	return 0;
}
	
	
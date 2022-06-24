#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	
	if (a < b) {
		printf("\n%d é menor que %d", a, b);
    }else{
		if (a == b) {
			printf("\n%d é menor que %d ", b, a);
		}else{
			printf("\n%d é igual a %d ", a, b);
		}		
	}

	return 0;
}

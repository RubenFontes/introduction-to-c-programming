#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, z, soma, produto;
	float media;
	
	printf("Digite um valor para X: ");
	scanf("%d", &x);
	
	printf("Digite um valor para Y: ");
	scanf("%d", &y);
	
	printf("Digite um valor para Z: ");
	scanf("%d", &z);

	soma = x+y+z;
	produto = x*y*z;
	media = (x+y+z)/3.0;
	printf("\nSoma = %d\nProduto = %d\nMedia = %.2f", soma, produto, media);
	
	return 0;
}

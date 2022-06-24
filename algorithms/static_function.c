#include <stdio.h>

double AdicioneNaMedia(double valor){
	static double soma=0;
	static int contador=0;

	soma += valor;
	contador++;

	return soma/contador;
}

int main(){
	int a, i;
	double n, media;

	puts("Digite um valor: ");
	scanf("%d", &a);
	for(i=0; i<a; i++){
        printf("Insira um valor: ");
		scanf("%lf", &n);
		media = AdicioneNaMedia(n);
		printf("media ate aqui:  %.2lf\n", media);
	}
	return 0;
}

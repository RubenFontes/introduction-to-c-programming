#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;

	printf("Insira um valor para A: ");
	scanf("%d", &a);
	
	printf("Insira um valor para B: ");
	scanf("%d", &b);
	
	printf("Insira um valor para C: ");
	scanf("%d", &c);

	if (b < a && a > c) { 
		printf("%d é o maior valor ", a);
	}else{
		if(a < b && b > c) {
			printf("%d é o maior valor ", b);
		}else{
			printf("%d é o maior valor ", c);
		}		
	}

	return 0;
}
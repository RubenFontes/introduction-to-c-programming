#include <stdio.h>

int main(){
	int elementos[10];
	int i, soma=0;

	for(i=0; i<10; i++){
        scanf("%d", &elementos[i]);
		printf("vetor[%d] = %d\n", i, elementos[i]);
	}
	puts("\n");
    for(i>0; i--;){
		printf("vetor[%d] = %d\n", i, elementos[i]);
	}
    puts("\n");
	printf("vetor[5] = %d\n", elementos[5]);
	puts("\n");

	for(i=0; i<10; i++){
        if(i%2!=0){
            printf("vetor[%d] = %d\n", i, elementos[i]);
        }
	}
	puts("\n");
    for(i=0; i<10; i++){
        soma= soma + elementos[i];
	}
    printf("%d", soma);

	return 0;
}


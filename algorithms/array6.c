#include <stdio.h>
#include <stdbool.h>

float MediaArray(float soma, float qntd){
    return soma/qntd;
}

bool EmArray(int n, int *items, int buscar){
    bool t = true;
    int i;
    for(i=0; i<n; i++){
        if(buscar==items[i]){
            return t;
        }
    }
    if(buscar!=items[i]){
        t=false;
        return t;
    }
}

bool EhArrayOrdenado(int *array){
    bool ordenado = true;
    int i;
    for(i = 0; i<(i - 1); i++){
        if (array[i] >= array[i + 1]){
            ordenado = false;
            break;
        }
    }
    if(ordenado){
        puts("Os valores estao ordenados.");
    }else{
        puts("Os valores nao estao ordenados.");
    }

}

int main(){
	int elementos[10];
	int i, soma=0, buscar, maior;
	bool array, ArrayOrder;
	float media;

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
    printf("soma = %d\n\n", soma);
    media=MediaArray(soma, 10.0);
    printf("media = %.2f\n", media);

    printf("\nDigite um valor: ");
    scanf("%d", &buscar);
    array = EmArray(10, elementos, buscar);
    if(array==true){
        puts("\no valor esta dentro do array");
    }else{
        puts("\no valor nao esta dentro do array");
    }

    maior = elementos[0];
    for(i=0; i<10; i++){
        if(maior<elementos[i]){
            maior=elementos[i];
        }
    }
    printf("\nMaior item do Array eh: %d\n", maior);

    ArrayOrder = EhArrayOrdenado(elementos);
	return 0;
}


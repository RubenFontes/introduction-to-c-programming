#include <stdio.h>
#include <math.h>

int Delta(int a, int b, int c){
    int deltaf = (b*b) - (4*a*c);
    return deltaf;
}
int RaizX1(int b, int delta, int a){
    int raiz1 = (-b + sqrt(delta))/(2*a);
}
int RaizX2(int b, int delta, int a){
    int raiz2 = (-b - sqrt(delta))/(2*a);
}
int main(){
    int a, b, c, delta, x1, x2;

    puts("Digite o valor de A: ");
    scanf("%d", &a);
    puts("Digite o valor de B: ");
    scanf("%d", &b);
    puts("Digite o valor de C: ");
    scanf("%d", &c);

    if(a==0){
        return 1;
    }

    delta = Delta(a, b, c);
    if(delta<0){
        return 2;
    }
    printf("delta = %d", delta);
    x1 = RaizX1(b, delta, a);
    printf("\nx1 = %d", x1);
    x2 = RaizX2(b, delta, a);
    printf("\nx2 = %d", x2);

    return 0;
}

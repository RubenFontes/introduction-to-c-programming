#include <stdio.h>

int main()
{
    float peso6, peso4, nota1_ip, nota1_lab, nota2_ip, nota2_lab, nota3_ip, nota3_lab, notaUnidade1, notaUnidade2, notaUnidade3, mediasemestre;
    /*definição de variaveis correspondentes as notas de cada unidade, pesos das notas, unidades do semestre a media do semestre*/

    printf("(IP)nota 1: ");
    scanf("%f", &nota1_ip); /*entrada na primeira nota da unidade 1*/
    printf("(LAB)nota 1: ");
    scanf("%f", &nota1_lab);/*entrada na segunda nota da unidade 1*/

    if(nota1_ip > nota1_lab) /*se a nota de 'ip' for maior do que a de 'lab', a media será calculada com o peso "6" na nota de 'ip'. Caso contrário, 'lab' recebe peso 6 no calculo da media*/
    {
        notaUnidade1 = ((nota1_ip*6)+(nota1_lab*4))/10;
        printf("\nNota unidade 1: %.1f\n", notaUnidade1);
    }else{
        notaUnidade1 = ((nota1_ip*4)+(nota1_lab*6))/10;
        printf("\nNota unidade 1: %.1f\n", notaUnidade1);
    }

    printf("\n(IP)nota 2: ");
    scanf("%f", &nota2_ip); /*entrada na primeira nota da segunda unidade*/
    printf("(LAB)nota 2: ");
    scanf("%f", &nota2_lab);/*entrada na segunda nota da segunda unidade*/

    if(nota2_ip > nota2_lab)/*mesma situação da primeira unidade, agora aplicado à segunda unidade*/
    {
        notaUnidade2 = ((nota2_ip*6)+(nota2_lab*4))/10;
        printf("\nNota unidade 2: %.1f\n", notaUnidade2);
    }else{
        notaUnidade2 = ((nota2_ip*4)+(nota2_lab*6))/10;
        printf("\nNota unidade 2: %.1f\n", notaUnidade2);
    }
    printf("\n(IP)nota 3: ");
    scanf("%f", &nota3_ip);/*entrada na primeira nota da terceira unidade */
    printf("(LAB)nota 3: ");
    scanf("%f", &nota3_lab);/*entrada na segunda nota da terceira unidade*/

    if(nota3_ip > nota3_lab)/*mesma condição envolvendo os pesos aplicado nas unidades anteriores e agora na terceira*/
    {
        notaUnidade3 = ((nota3_ip*6)+(nota3_lab*4))/10;
        printf("\nNota unidade 3: %.1f\n", notaUnidade3);
    }else{
        notaUnidade3 = ((nota3_ip*4)+(nota3_lab*6))/10;
        printf("\nNota unidade 3: %.1f\n", notaUnidade3);
    }

    mediasemestre = (notaUnidade1 + notaUnidade2 + notaUnidade3)/3; /*media semestral a partir do calculo da media das 3 unidades*/
    if (mediasemestre < 5.0){ /*se a media semestral for menor que 5, resultado = f, entre 5 e 6 = E, entre entre 6 e 7 = D, entre 7 e 8 = C, entre 8 e 9 = B e entre 9 e 10 = A*/
        puts("\nF");
    }
    if (mediasemestre >= 5.0 && mediasemestre < 6.0){
        puts("\nE");
    }
    if (mediasemestre >= 6.0 && mediasemestre < 7.0){
        puts("\nD");
    }
    if (mediasemestre >= 7.0 && mediasemestre < 8.0){
        puts("\nC");
    }
    if (mediasemestre >= 8.0 && mediasemestre < 9.0){
        puts("\nB");
    }
    if (mediasemestre >= 9.0 && mediasemestre == 10){
        puts("\nA");
    }

    return 0;
}

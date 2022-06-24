#include <stdio.h>
int main()
{
     int base, expoente, i=1, pot=1;

     printf ("Digite o valor da base : ");
     scanf ("%d",&base);
     printf ("Digite o valor do expoente: ");
     scanf ("%d",&expoente);

     for (i=1;i<=expoente;i++)
     {
     pot = pot * base;
     }
     printf ("\n%d elevado a %d eh: %d", base, expoente, pot);

     return 0;

}

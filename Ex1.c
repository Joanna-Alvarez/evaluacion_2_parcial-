#include <stdio.h>
int main()
{
    /*  Joanna Alvarez
    12 MAY 21 
    programa*/

    float primero, segundo, multiplica, division;  
      printf ("\n\n Programa 3");
      printf ("\n\n Saca el promedio de valores reales");
      printf ("\n\n Dame el primer valor real");
      scanf ("%f",&primero);
      printf ("\n\n Dame el segundo valor real");
      scanf ("%f",&segundo);
      multiplica=primero * segundo;
      division=primero / segundo;  
      printf ("\n\n el producto es %f",&multiplica);
      printf ("\n\n el cociente es %f",&division);

      return 0;
} 
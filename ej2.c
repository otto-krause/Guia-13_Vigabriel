#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num[6]={0}, prom=0, suma=0, mayor=0, total=0, prom1=0, I=0;
  printf(" Ingrese 5 numeros: ");
 for (I=1;I<6;I++) {
 scanf("%d", &num[I]);
 if (mayor<num[I])
 mayor=num[I];
 total=5*num[I];
 suma=suma+total;
 }
 prom=suma/5;
 prom1=prom/5;
 printf("El numero promedio es: \n%d\n", prom1);
 printf("El numero mas grande es: \n%d\n", mayor);
}

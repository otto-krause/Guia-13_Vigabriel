#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vent[21]={0}, vendidas=0, mayor=0, i=0, j=0;
    for (i=1;i<21;i++){
            for (j=1;j<16;j++){
                printf("El dia %d el vendedor %d vendio : ",j,i);
                scanf("%d",&vent[i]);
                vendidas=vendidas+vent[i];
                if (vent[i]>mayor){
                    mayor = vent[i];
                }
            }
    }
    printf("Total de ventas : %d\n",vendidas);
    printf("Mayor ventas : %d",mayor);
}

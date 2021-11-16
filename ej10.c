#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[7]={0}, i=0;
    float tot[4]={0,1,0,0};
    printf("Ingrese numeros :\n");
    for(i=1;i<6;i++){
        scanf("%d",&num[i]);
    }
    for(i=1;i<6;i++){
        tot[0]=tot[0]+num[i];
        tot[1]=tot[1]*num[i];
    }
    tot[2]=tot[0]/5;
    for(i=1;i<6;i++){
        if(num[i]<tot[2]){
            tot[3]+=1;
        }
    }
    printf("La suma es : %.0f\n",tot[0]);
    printf("El producto es : %.0f\n",tot[1]);
    printf("El promedio es : %.2f\n",tot[2]);
    printf("El que esta bajo del promedio es : %.2f\n",tot[3]);
}

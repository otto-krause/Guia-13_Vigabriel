#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[7]={0}, i=0, num[3]={0};
    printf("Ingrese los numeros que entran a la lista mayores a 0 :\n");
    for (i=1;i<6;i++){
        scanf("%d",&list[i]);
    }
    for(i=1;i<6;i++){
        if(list[i]<list[i+1]){
            num[0]=num[0]+1;
        }else{
        if(list[i]>list[i+1]){
            num[1]=num[1]+1;
        }
        }
    }
    num[3]=list[1]+list[5];
    if(num[0]==4){
            printf("Ascendente\n");
        }else{
        if(num[1]==5){
            printf("Descendente\n");
        }else{
        printf("Desordenado\n");
               }
        }
        printf("Suma del primero y el ultimo es :%d",num[3]);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[2]={0},i=0;
    printf("Ingrese dos numeros: \n");
     for (i=0;i<2;i++){
scanf("%d",&num[i]);
     }
     if(num[1]>num[0]){
     for(i=num[0]+1;i<num[1];i++){
            printf("%d ",i);
        }
	}else{
            if (num[0]>num[1]){
        for(i=num[1]+1;i<num[0];i++){
            printf("%d ",i);
	}}else{
	printf("Son iguales");
	}
	}
}

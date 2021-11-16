#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nota[16]={0}, i;
	for(i=1;i<16;i++){
        printf("Nota del alumno %d : ",i);
        scanf("%d",&nota[i]);
	}
	for(i=1;i<16;i++){
        if(nota[i]>8){
	printf(" [%d] ",i);
	}
 }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[31]={0};
    int i=0;
    for (i = 1; i < 31; ++i){
         printf("Nota del alumno numero %d : ",i);
         scanf("%f",&nota[i]);
        nota[0]=nota[0]+nota[i];
}
nota[31]=nota[0]/30;
        printf("%.1f",nota[31]);
}

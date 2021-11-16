#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trab[21]={0}, sal[1]={0}, i=0;
    for (i=1;i<21;i++){
        printf("Ingrese el sueldo del trabajador %d :",i);
        scanf("%d",&trab[i]);
        if(trab[i]>2000){
            sal[0]+=1;
        }
        if(trab[i]<2000){
            sal[1]+=1;
        }
    }
    system("cls");
    printf("Los que ganan mas de 2000 $ son : %d\n",sal[0]);
    printf("Los que ganan menos de 2000 $ son : %d",sal[1]);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[2]={0,1,0},i=0;
    for (i=0;i<60;i++){
        vec[2]=vec[0]+vec[1];
        vec[0]=vec[1];
        vec[1]=vec[2];
        printf(" %d ",vec[0],vec[1],vec[2]);
    }
}

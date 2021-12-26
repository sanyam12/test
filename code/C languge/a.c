#include <stdio.h>

int main ()
{
    int nort;
    printf("Input the number: - ");
    scanf("%d",&nort);
    
    for(int j=1;j<=10;j++)
    {
        printf("%d X %d = %d \n",nort,j,nort*j);
    }
    
}
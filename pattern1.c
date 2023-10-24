/*
i/p : n = 5 
o/p:
* 
* * 
* * *
* * * *
* * * * *
  * * * *
    * * *
      * * 
        *
*/

#include <stdio.h>

int main()
{
    int row,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=(row-1); i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=(row-i); k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}


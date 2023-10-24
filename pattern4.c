/*
i/p : n = 5 
o/p:
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 
*/

#include <stdio.h>

int main()
{
    int row,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0; i<row; i++)
    {
        for(j=0; j<(row*2-1); j++)
        {
            if(j>i && j<((row*2-1)-(i+1)))
            printf("  ");
            else
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


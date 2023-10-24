/*
i/p : n = 9 
o/p:
1                                 
1 2                               
1 2 3                             
1 2 3 4                           
1 2 3 4 5                         
1 2 3 4                           
1 2 3                             
1 2                               
1   
*/

#include <stdio.h>

int main()
{
    int row,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0; i<row; i++)
    {
        for(j=0; j<(row*2-1); j++)
        {
            if(i<=(row/2))
            {
                if(j>i)
                printf("  ");
                else
                printf("%d ",(j+1));
            }
            else
            {
                if(j < (row-i))
                printf("%d ",(j+1));
                else
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


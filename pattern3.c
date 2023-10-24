/*
i/p : n = 9 
o/p:
*********
 ******* 
  *****  
   ***   
    *    
   ***   
  *****  
 ******* 
*********
*/

#include <stdio.h>

int main()
{
    int row,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0; i<row; i++)
    {
        for(j=0; j<row; j++)
        {
            if(i<=(row/2))
            {
                if(i!=0 && j<i || j>((row-1)-i))
                printf("  ");
                else
                printf("* ");
            }
            else
            {
                if(j<(row-1) && j<((row-1)-i) || j>i)
                printf("  ");
                else
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}


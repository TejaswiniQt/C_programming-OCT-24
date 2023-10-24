/*.Design a program to find the overlapping part of two arrays using pointers.
WTD: Use two pointers to traverse both arrays. When a common element is found, move 
both pointers forward.
(e.g.: I/P: int arr1[] = {1,2,3,4,5,6}, arr2[] = {5,6,7,8} ,O/P: {5,6} )
*/

#include <stdio.h>

void find_overlap_arr_part(int arr1[],int *arr2,int len1,int len2);

int main()
{
    int arr1[50],arr2[50];
    int len1,len2,i;
    printf("Enter arr1 length: ");
    scanf("%d",&len1);
    printf("Enter arr1 elemnts: ");
    for(i=0; i<len1; i++)
    {
        scanf("%d",(arr1+i));
    }
    printf("Enter arr2 length: ");
    scanf("%d",&len2);
    printf("Enter ar2 elemnts: ");
    for(i=0; i<len2; i++)
    {
        scanf("%d",(arr2+i));
    }
    find_overlap_arr_part(arr1,arr2,len1,len2);
    return 0;
}

void find_overlap_arr_part(int arr1[],int *arr2,int len1,int len2)
{
    int i=0,j=0;
    printf("O/P: ");
   for(i=0; i<len1; i++)
   {
       if(arr1[i] == arr2[j])
       {
           for(j=0; j<len2; j++)
           {
               if(arr1[i+j] == arr2[j])
               printf("%d ",arr2[j]);
               else
               break;
           }
       }
   }
  /*  for(i=0; i<len1; i++)
    {
        if(arr1[i] == arr2[i])
        printf("%d ",arr1[i]);
    }*/
    
    
}
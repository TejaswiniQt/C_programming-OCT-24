/*. Write a function that trims leading and trailing whitespace from a string using 
pointers.
WTD: Use two pointers to find the first and last non-whitespace characters. Move 
characters to trim the string
(e.g.: I/P: " Hello World " ,O/P: "Hello World" )*/

#include <stdio.h>
#include<string.h>

void trims_whitespace(char str[]);

int main()
{
    char str[50];
    printf("Enter the string:");
    fgets(str,50,stdin);
    trims_whitespace(str);
    printf("String after trimming whitespaces:%s\n",str);
    return 0;
}

void trims_whitespace(char str[])
{
    char *ptr1,*ptr2;
    int length,i;
    length = strlen(str);
    ptr1 = str;
    ptr2 = (char *)(str+(length-1));
    while((*ptr1 == ' ') || (*ptr2 == ' '))
    {
        if((*ptr1) == ' ')
        {
            for(i=0; i<length; i++)
            {
                str[i] = str[i+1];
            }
            length--;
            ptr2--;
        }
        if((*ptr2) == ' ')
        {
            *ptr2 = *(ptr2+1);
            ptr2--;
            length--;
        }
    }
    
    
}
/*06.2.Write a C program to copy elements of one string into another using pointers.
Enter string: Muzan
Copied string: Muzan
*/
#include<stdio.h>
int main()
{
    int len=0,i;
    char str[101],str1[101],*p,*p1;
    printf("Enter string: ");
    gets(str);

    for(p=str;*p!='\0';p++)
    {
        len++;
    }

    p=str;
    p1=str1;

    for(i=0;i<len;i++)
    {
        *(p1+i)=*(p+i);
    }

    printf("Copied string: ");
     for(i=0;i<len;i++)
    {
        printf("%c",*(p1+i));
    }
}

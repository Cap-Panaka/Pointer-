/*08.Write a C program to concatenate two strings using pointers.
Enter 1st string: Partho
Enter 2nd string: Pal
Concatenated string: ParthoPal

*/
#include<stdio.h>
int main()
{

    char str[101],str1[101],*p,*p1;
    int i,n;
    printf("Enter 1st string: ");
    gets(str);
    printf("Enter 2nd string: ");
    gets(str1);
    p1=str1;
    p=str;

    while(*p!='\0')
    {
        p++;
    }
    while(*p1!='\0')
    {
        *p=*p1;
        p++;
        p1++;
    }
    *p='\0';
    printf("Concatenated string: %s",str);
}

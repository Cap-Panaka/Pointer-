/*10.Write a program to check whether a string is a palindrome using pointers.
Enter the string: Rif
String after reversing: fiR
Not Palindrome

*/

#include<stdio.h>
int main()
{

    int i,len=0,flag=1;
    char str[101],str1[101],*p,*p1;
    printf("Enter the string: ");
    gets(str);

    for(p=str; *p!='\0' ; p++)
    {
        len++;
    }

    p=str;
    p1=str1;

    for(i=0;i<len;i++)
    {
        *(p1+i) = *(p+i);
    }
    *(p1+len)='\0';

    for(i=0;i<len/2;i++)
    {

        char temp=*(p+i);
        *(p+i)=*(p+(len-1-i));
        *(p+(len-1-i))=temp;

    }

    printf("String after reversing: %s",str);

    for(i=0;i<len;i++)
    {

        if(*(p+i)!=*(p1+i))
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");

}

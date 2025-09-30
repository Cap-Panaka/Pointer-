/*05.Write a program to reverse an string using pointers .
Enter string: Adiba
Reversed string: abidA

*/
#include<stdio.h>
int main()
{
    char str[101],*p,*p2;
    int len=0,i;
    printf("Enter string: ");
    gets(str);
    for(p=str;*p!='\0';p++)
    {
        len++;
    }
    p=str;

    printf("Reversed string: ");
    for(i=(len-1);i>=0;i--)
    {
        printf("%c",*(p+i));
    }
}


//Another way
#include<stdio.h>
int main()
{
    char str[101],str1[101],*p,*p1;
    int len=0,i;
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
        *(p1+i)=*(p+(len-1-i));
    }

    printf("Reversed string: ");
    puts(str1);
}



//ANother way(2)
#include<stdio.h>
int  main()
{
    char str[101],*p,*p1;

    int len=0,i;
    printf("Enter string: ");
    gets(str);

    for(p=str;*p!='\0';p++)
    {
        len++;
    }

    p=str;
    p1=str+len-1;
    for(i=0;i<len/2;i++)
    {

        char temp=*(p+i);
        *(p+i)=*(p1-i);
        *(p1-i)=temp;
    }

    printf("Reversed string: ");
    puts(str);

}


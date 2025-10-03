/*Write a function that reverses a string in place using pointers (pass string as parameter)


 Enter a string: hello
Reversed string: olleh*/

#include <stdio.h>

void rev(char *p)
{
    int len=0;
    //char *p=str;
    char temp;

    for(len=0;*(p+len)!='\0';len++);

    for(int i=0;i<len/2;i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+(len-1-i));
        *(p+(len-1-i))=temp;
    }

}

int main()
{

    char str[101];
    printf("Enter a string: ");
    gets(str);

    rev(str);
    printf("Reversed string: %s",str);

}

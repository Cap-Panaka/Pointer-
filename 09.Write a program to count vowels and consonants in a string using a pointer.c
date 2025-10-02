/*09.Write a program to count vowels and consonants in a string using a pointer.
Enter string: Gojo saturo
Vowel count: 5
Consonant count: 5

*/

#include<stdio.h>
int main()
{

    char str[101],*p;
    int consonant=0,vowel=0;
    printf("Enter string: ");
    gets(str);
    p=str;
    while(*p!='\0')
    {
        if(('a'<=*p && 'z'>=*p)||('A'<=*p && 'Z'>=*p))
        {
            if('A'==*p || 'E'==*p ||'I'==*p || 'O'==*p || 'U'==*p || 'a'==*p || 'e'==*p || 'i'==*p || 'o'==*p || 'u'==*p )
            {
                vowel++;
            }
            else
            {

                consonant++;
            }
        }
        p++;


}

        printf("Vowel count: %d",vowel);
        printf("\nConsonant count: %d",consonant);
}

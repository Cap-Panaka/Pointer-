/*Write a program to input 5 integers into an array and use a pointer to display them.

*/
#include <stdio.h>
int main()
{
    int *p,arr[100],i;
    p=arr;
    printf("Enter 5 integers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("The integers are: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}

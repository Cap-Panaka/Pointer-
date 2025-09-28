/*Write a C program to find the sum of two numbers using pointers.
Enter the 1st number: 2
Enter the 2nd number: 3
Sum= 5
*/
#include<stdio.h>
int main() 
{
    int x,y,*p,*q;
    printf("Enter the 1st number: ");
    scanf("%d",&x);
    printf("Enter the 2nd number: ");
    scanf("%d",&y);
    p=&x;
    q=&y;
    int sum=*p+*q;
    printf("Sum= %d",sum);
}

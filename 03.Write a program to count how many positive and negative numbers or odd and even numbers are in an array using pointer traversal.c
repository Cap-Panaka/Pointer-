/*Write a program to count how many positive and negative numbers or odd and even numbers are in an
array using pointer traversal. */

#include<stdio.h>
int main()
{
    int *p,n,i;
    
    printf("Enter how many numbers you want to input: ");
    scanf("%d",&n);
    int ar[n];
    p=ar;
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int pos=0,neg=0,odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if( *(p+i) >0) pos++;
        if( *(p+i) <0) neg++;
        if( *(p+i) % 2==0 ) even++;
        if( *(p+i) % 2!=0 ) odd++;
    }
    printf("******COUNTER.EXE*******\n");
    printf("Positive NUmbers: %d\n",pos);
    printf("Negative NUmbers: %d\n",neg);
    printf("Odd Numbers: %d\n",odd);
    printf("Even Numbers: %d\n",even);
}

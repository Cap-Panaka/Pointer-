/*04.Write a program that calculates the sum of all elements in an array using a pointer.
How many numbers you want to input: 5
Enter the numbers: 1 2 3 4 5
Sum= 15
*/

#include<stdio.h>
int main()
{ 
    int n,i,sum=0,*p;
    
    printf("How many numbers you want to input: ");
    scanf("%d",&n);
    int ar[n];
    p=ar;
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    
    printf("Sum= %d",sum);
}

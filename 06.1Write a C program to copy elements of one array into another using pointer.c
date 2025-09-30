/*06.1Write a C program to copy elements of one array into another using pointer
Enter the nummber of elements: 5
ENter the elements: 12 23 43 21 1
Copied elements: 12 23 43 21 1 
*/

#include<stdio.h>
int main() 
{
    int i,n,*p,*p1;
    printf("Enter the nummber of elements: ");
    scanf("%d",&n);
    printf("ENter the elements: ");
    int ar[n];
    p=ar;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int ar1[n];
    p1=ar1;
    for(i=0;i<n;i++)
    {
        *(p1+i)=*(p+i);
    }
    
    printf("Copied elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p1+i));
    }
}

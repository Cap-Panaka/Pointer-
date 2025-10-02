/*07.Write a program to find the largest and smallest element in an array using pointers.
Enter the number of the elements: 5
Enter the elements: 65 90 89 09 12

Largest number is : 90
Smallest number is : 9
*/

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of the elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    int *p, ar[n];
    p=ar;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    
    int l;
    l=*p;
    for(i=0;i<n;i++)
    {
        if(l<*(p+i))
        {
            l=*(p+i);
        }
    }
    printf("\nLargest number is : %d",l);
    
    int s;
    s=*p;
    for(i=0;i<n;i++)
    {
        if(s>*(p+i))
        {
            s=*(p+i);
        }
    }
    printf("\nSmallest number is : %d",s);
}

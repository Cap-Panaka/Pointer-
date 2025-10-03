/*14. Write a function that takes an array and its size as arguments (using pointers) and returns the average of the
elements.


Enter the number of elements: 5
Enter the elements: 1 2 3 4 5
Avg= 3.000000
 */

#include<stdio.h>
float func(int *p, int *p1)
{
    int i,sum=0;
    for(i=0;i<*p1;i++)
    {
        sum=sum+ *(p+i);
    }
    return (float)sum / *p1 ;
}
int main()
{
    int j,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    int ar[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&ar[j]);
        
    }
    
    float avg=func(ar,&n);
    printf("Avg= %f",avg);
}

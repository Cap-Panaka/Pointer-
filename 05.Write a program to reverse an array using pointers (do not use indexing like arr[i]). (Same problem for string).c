/*05.Write a program to reverse an array using pointers (do not use indexing like arr[i]). (Same problem for string)
How many elements you want to input: 5
Enter elements: 1 2 23 4 5
After reversing: 5 4 23 2 1 
*/


//Using Array:
#include<stdio.h>
int main()
{
   int n,i,*p;
   printf("How many elements you want to input: ");
   scanf("%d",&n);
   int ar[n],ar1[n];
   p=ar;
  // p1=ar1;
   printf("Enter elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",p+i);
   }
   printf("After reversing: ");
   for(i=n-1;i>=0;i--)
   {
      printf("%d ",*(p+i));
   }
}


//Another Way
#include<stdio.h>
int main()
{
    int n,i,*p,*p1;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    int ar[n],ar1[n];
    p=ar;
    p1=ar1;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    
    for(i=0;i<n;i++)
    {
        *(p1+i)=*(p+(n-1-i));
    }
    
    printf("After reversing: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p1+i));
    }
}



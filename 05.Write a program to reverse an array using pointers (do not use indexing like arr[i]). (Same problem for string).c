/*05.Write a program to reverse an array using pointers (do not use indexing like arr[i]). (Same problem for string)*/


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


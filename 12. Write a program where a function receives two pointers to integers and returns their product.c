/*12. Write a program where a function receives two pointers to integers and returns their product.
Enter 1st number: 3
Enter 2nd number: 4
Product: 12
*/
#include<stdio.h>
int hehe(int *p , int *p1)
{
   return  (*p) * (*p1) ;
}
int main() 
{
    int n,n1;
   printf("Enter 1st number: ");
    scanf("%d",&n);
    printf("Enter 2nd number: ");
    scanf("%d",&n1);
    int product= hehe(&n,&n1);
    printf("Product: %d",product);
    
    
}

/*13.Write a function that swaps two numbers using call by reference (pointer parameters).
Enter two numbers: 2 3
After swapping: 3 2
*/

#include<stdio.h>
void func(int *p ,int *p1)
{
    int temp=*p;
    *p=*p1;
    *p1=temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    func(&a,&b);
    printf("After swapping: %d %d",a,b );
}

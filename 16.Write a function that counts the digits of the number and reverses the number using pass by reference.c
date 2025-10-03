/*16.Write a function that counts the digits of the number and reverses the number using pass by reference.
Enter number: 145
Digits: 3
Reverse: 541
*/
#include<stdio.h>
void func(int *p,int *p1,int *p2)
{
    *p1=0,*p2=0;
    while(*p>0)
    {

        *p1=((*p1)*10)+((*p)%10);
        *p=((*p)/10);

        (*p2)++;
    }
}
int main()
{
    int n,rev,count;
    printf("Enter number: ");
    scanf("%d",&n);
    func(&n,&rev,&count);
    printf("Digits: %d",count);
    printf("\nReverse: %d",rev);
}

/*11.Write a function that takes a pointer to an integer and increments its value by 10. Test it in main().
Enter the number: 10
+10 : 20
*/

#include<stdio.h>
void fun(int *p)
{
    *p=*p+10;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fun(&n);
    printf("+10 : %d",n);

}

#include <stdio.h>
void sum_value (int a, int b)
{
    int sum = a+b;
    printf("%d\n" , sum);
}
void sum_ref (int*a , int*b)
{
    int sum = *a+*b;
    printf("%d\n", sum);
}
void main()
{
    int a = 67;
    int b = 56;
    printf("call by value:");
    sum_value(a,b);
    printf("call by reference:");
    sum_ref(&a,&b);
}
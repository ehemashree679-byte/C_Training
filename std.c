//write a c program add three numbers call and reference
#include <stdio.h>
void addition ( int *a ,int *b ,int *c)
{
    int add = (*a+*b+*c);
    printf("%d\n" , add);
}
void main ()
{
    int a = 2;
    int b = 3;
    int c = 5;
    printf("call by reference:");
    addition(&a,&b,&c);
}
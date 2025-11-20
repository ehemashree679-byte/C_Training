//write a function it will accept two input parameters x,y and returns x^2+y^2
#include <stdio.h>
int sos(int x,int y)
{
    int sum = (x*x)+(y*y);
    return sum;
}
void main()
{
    int x=6,y=3;
    printf("sum is %d\n", sos(x,y));
}


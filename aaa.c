//write a c function which will accept an arrey,its size as n, and returns the difference between first and last elements
#include <stdio.h>

int diffFirstLast(int arr[], int n)
{
    if(n<=0)
    return 0;
    return arr[n-1]-arr[0];
}
int main()
{
int a[] = {10, 20, 30, 40, 50};
int n=5;
int result = diffFirstLast(a,n);
printf("difference = %d",result);
return 0;
}

//write a c function which will accept 1 input parameter  and returns r the perimeter of circle,declare pi has constant!
#include <stdio.h>

const float Pi=3.14;
float perimeter(float r)
{
    return 2 * Pi * r;
}

int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Perimeter of circle = %.2f\n", perimeter(radius));

    return 0;
}
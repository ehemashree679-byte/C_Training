//create a structure with three variables name of the car ,maximum speed ,price store this in a array of structures and display them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name [100];
    float speed;
    int price;
};

void main()
{
    int n ;
    printf("enter the number of car:");
    scanf("%d", &n);
    struct car c[n];
    for (int i=0; i<n; i++)
    {
        printf("enter the name of car:");
        scanf("%s", c[i].name);

        printf("enter the speed of car:");
        scanf("%f", &c[i].speed);

        printf("enter the price of car:");
        scanf("%d",&c[i].price);
    }
    printf("your information:\n");
    for ( int i=0;i<n;i++)
    {
        printf("%s\n", c[i].name);
        printf("%f\n", c[i].speed);
        printf("%d\n", c[i].price);
    }
}
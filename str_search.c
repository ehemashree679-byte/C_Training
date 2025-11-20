#include <stdio.h>
#include <string.h>

void main()
{
    char des [100] = " we are super kides";
    char se [10] = "good";
if ((strstr(des, se)) != NULL)
printf("Found");
else
printf("Not Found");
}
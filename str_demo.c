#include <stdio.h>
#include<string.h>
void main()
{
    char name [10] = "AISHWARYA";
    char new[100] = "hello";
    printf("%c", name[8]); //access
    printf("length of string is %d\n", strlen(name));
    //concatenatoin
    strcat(new ,name); //new = hello+AISHWARYA
    printf("%s", new);
    //search for a char in string!
    if ((strstr(new, "AISHWARYA"))!= NULL)
    printf("found");
}
#include <stdio.h>
#include <stdlib.h>
void main ()
{
    float *p = (float*)calloc(4,sizeof(float));
    p [0] = 34.5;
    p [1] = 34.9;
    p [2] = 89.6;
    p [3] = 78.4;
    printf("%f%f%f%f\n",p[0],p[1],p[2],p[3]);
    free (p);
    
}
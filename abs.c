#include <stdio.h>
void main()
{
    int arr[4][2]= { {2,3},{1,4},{5,6},{33,87} };
    for (int i=0; i<4; i++)
    {
        for ( int j=0; j<2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}
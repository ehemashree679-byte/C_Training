#include<stdio.h>
int search(int arr[], int key, int n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[5] = {35,45,99,12,78};
    int key;
    int n =5;
    printf("what are u search?");
    scanf("%d", &key );
    printf("%d", search(arr,key,n));

}


#include <stdio.h>

int main()
{
    int arr[] = {58,456,12,54,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[0])
        {
            arr[0] = arr[i];
        }
    }
    printf("Largest element is: %d\n", arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < arr[0])
        {
            arr[0] = arr[i];
        }
    }
    printf("Smallest element is: %d\n", arr[0]);

}
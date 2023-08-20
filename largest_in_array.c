#include <stdio.h>

int main()
{
    int num[] = {8,4,78,45,1,9};
    int length = sizeof(num) / sizeof(num[0]);

    for (int i = 1; i < length; i++)
    {
        //Bakchodi ka comment....
        if(num[i] > num[0])
        {
            num[0] = num[i];
        }
    }
    printf("%d\n", num[0]);
}
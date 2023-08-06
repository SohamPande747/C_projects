#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            printf("%d\n", i);
        }
    }
}
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d" ,&num);
    int count = 1;
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            count++;
        }
    }
        if (count == 2)
        {
            printf("The number is prime");
        }
        else
        {
            printf("The number is not prime");
        }
}
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);


    int flag = 1;

    for(int i=2;i<number;i++)
    {
        if(number%i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag==1)
    {
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }

    return 0;
}
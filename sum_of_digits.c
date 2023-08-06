#include <stdio.h>

int reverse(int x);

int main()
{
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int x = num;
    // while(temp > 0)
    // {    
    //     int j = temp % 10;
    //     temp /= 10;
    //     printf("%d", j);

    // }   
    reverse(num);
}

int reverse(int x)
{
    int final = 0;
    int result = 0;
    while(x != 0)
    {    
        result *= 10;
        result = x % 10;
        x /= 10;
       // printf("%d", result);
        final += result;
    }  
    printf("%d", final);

    return final;
}
#include <stdio.h>
#include <math.h>

int length(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int j;
    float result = 0;
    while(temp > 0)
    {    
        j = temp % 10;
        temp /= 10; 
        result += pow(j,length(num));           
    }
    if (num == result)
    {
        printf("This is Armstrong ");
    }
    else
    {
        printf("This is not");
    }
}

int length(int num)
{
    int count = 0;
    while(num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
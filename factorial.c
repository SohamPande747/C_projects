#include <stdio.h>

int main()
{
    int number;
    int temp = 1;

    printf("Enter the number: ");
    scanf("%d" ,&number);
    for (int i = 1; i <= number; i++)
    {
        temp = temp * i;
    }
    printf("%d" ,temp);
}



#include <stdio.h>

int main()
{
    int fact;
    printf("Enter a number: ");
    scanf("%d" ,&fact);
            int temp = 1;
    for (int i = 1; i <= fact; i++)
    {

        temp = temp*i;
    }
    printf("Factorial is: %d" , temp);
}
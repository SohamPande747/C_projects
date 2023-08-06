#include<stdio.h>

int main ()
{
    int height, i, j;

    printf("Enter Required Height: ");
   scanf("%d" , &height);

    for (i = 0; i <= height; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
        for (j = height; j >= i ; j--)
        {
            printf(" ");
        }
    }

}


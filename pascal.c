#include <stdio.h>

int main()
{
    int rows;
    printf("Enter a number: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        int j = 1;
        j += i;
        printf("%d%d", i,j);
        printf("\n");
    }

}



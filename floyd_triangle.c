#include <stdio.h>

int main()
{
    int rows,nums = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", nums);
            nums++;
        }
        printf("\n");
    }
}
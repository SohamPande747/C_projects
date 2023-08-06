#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter elements: ");
        scanf("%d", &num[i]); 
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
}
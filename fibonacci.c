#include<stdio.h>

int main()
{
    int dig1 = 0, dig2 = 1, count, limit;

    printf("Number of elements in series: ");
    scanf("%d", &limit);

    int temp_ans = dig1 + dig2;

    for (count = 0; count < limit; count++)
    {
        printf("%d\n", temp_ans);

        dig1 = dig2;
        dig2 = temp_ans;
        temp_ans = dig1 + dig2;
        
    }
}
#include <stdio.h>

int main()
{
    int a = 12;
    int b = 43;
    int c = 14;
    int d = 98;

    int x = max(a, max(b , max(c,d)));
    printf("%d" , x);
}
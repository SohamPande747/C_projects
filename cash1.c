#include<stdio.h>

int main()
{
    char op;
    int one,two;
    printf("Enter first number: " );
    scanf("%d\n",&one, &two);
    
    scanf("%c\n", &op);

    switch(op) 
    {
        case'+':
            printf("Answer: %d ", one + two);
            break;

        case'-':
            printf("Answer: %d ", one - two);
            break;

        case'*':
            printf("Answer: %d ", one * two);
            break;

        case'/':
            printf("Answer: %d ", one / two);
            break;

        // case'%':
        //     printf("Answer: %d ", one % two);
        //     break;

        default:
            printf("Invalid Operator");
    }
    return 0;
}

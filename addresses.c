#include <stdio.h>

int main()
{
    char *s = "hi!";
    
    printf("%s\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    
}

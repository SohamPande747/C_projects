#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int *freq = malloc(10 * sizeof(int)); 
    char *word = malloc (1001 * sizeof(char));
    scanf("%s", word);

    int count = 0;
    
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
    
    for (int i = 0; i <= strlen(word); i++)
    {
        if(isdigit(word[i]))
        {
		freq[word[i] - '0']++;			
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", freq[i]);
    }
    
    return 0;
}

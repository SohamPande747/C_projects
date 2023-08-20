#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{
		for (int j = n; j > i; j--)
		{
			printf("%d ", j);
		}
		printf("\n");

	}




  	// Complete the code to print the pattern.
    return 0;
}
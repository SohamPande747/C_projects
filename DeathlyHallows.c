#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int diam;
	printf("Enter the diameter of circle: ");
	scanf("%d", &diam);

	for (int i = 0; i < diam; i++)
	{
		for (int j = 0; j < diam; j++)
		{
			if ((i + j ) == (diam/2) + 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
    return 0;
}

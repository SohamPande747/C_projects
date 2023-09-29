#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *S = malloc(1000 * sizeof(char));

	scanf("%s", S);
	int count = 0;
	for (int i = 0; i < strlen(S); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (S[i] == j)
			{
				count++;
				printf("%d", count);
			}
		}

	}
}

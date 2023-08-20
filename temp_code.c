#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int count = 0;
    char word[1000];
	scanf("%s", word);

	printf("Enter a Word: ");
	
	for (int i = 0; i < strlen(word); i++)
	{
		printf("%d ", count);
		
		int j = (word[i]);
		// printf("%d\n", j);

		
		printf("%d ", count);
	}


    return 0;
}

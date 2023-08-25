#include <stdio.h>

int main() 
{
	int row,col;

	printf("Enter no. of rows: ");
	scanf("%d", &row);
	printf("Enter no. of columns: ");
	scanf("%d", &col);

	int mat[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("Enter element %d, %d: ", i,j);
			scanf("%d", &mat[i][j]);
			printf("%d", mat[i][j]);
		}
	}




	return 0;
}


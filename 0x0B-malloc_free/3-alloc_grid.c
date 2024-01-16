#include "main.h"

/**
* alloc_grid - a function that return pointer to 2d array
* @height: number of rows
* @width: number of col
* Return: pointer to 2d array initialized with 0,NULL if fail
*/

int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int i, j;
	int **ppi;

	row = height;
	col = width;


	if (row <= 0 || col  <= 0)
		return (NULL);


	ppi = malloc(sizeof(*ppi) * row);

	if (ppi == NULL)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		ppi[i] = malloc(sizeof(int) * col);

		if (ppi[i] == NULL)
			while (i--)
			{
				free(ppi[i]);
				free(ppi);
				return (NULL);
			}


		else
			for (j = 0; j < col; j++)
				ppi[i][j] = 0;

	}

	return (ppi);
}

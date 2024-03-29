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
	ppi = malloc(sizeof(*ppi) * row);


	if (row <= 0 || col  <= 0 || ppi == 0)
		return (NULL);

	else
	{

		for (i = 0; i < row; i++)
		{
			ppi[i] = malloc(sizeof(**ppi) * col);

			if (ppi[i] == 0)
			{
				while (i--)
					free(ppi[i]);
				free(ppi);
				return (NULL);
			}


			for (j = 0; j < col; j++)
				ppi[i][j] = 0;

		}
	}
	return (ppi);
}

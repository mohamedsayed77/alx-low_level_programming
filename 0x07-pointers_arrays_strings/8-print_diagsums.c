#include "main.h"

/**
 * print_diagsums - a function designed to calculate and print the sum
 *			of the diagonal elements is a square 2D
 * @a : 2d array of int
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}

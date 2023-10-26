#include "main.h"

/**
 * clear_bit - a function that clears the bit at the index
 * @n: takes the number to index
 * @index: takes the bit to clear
 * Return: 1 if successful, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1)

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}

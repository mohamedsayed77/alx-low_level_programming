#include "main.h"

/**
 * set_bit - a function that sets the bit at the index
 * @n: takes the number to index
 * @index: takes the bit to set
 * Return: 1 if successful, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}

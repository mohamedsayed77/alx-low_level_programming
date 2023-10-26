#include "main.h"

/**
 * get_bit - a function that gets the bit at the index
 * @n: takes a number to index
 * @index: takes the bit to get
 * Return: the bit state , -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}


#include "main.h"


/**
 * flip_bits - a function that return a number of bits that would
 * need to be flipped to transform one number to another
 * @n: takrs first number
 * @m: takes the second number
 * Return: the number of the bits to flip to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsinged long int xorvalue = n ^ m;
	unsigned int count = 0;

	while (xorvalue)
	{

		if (xorvalue & 1ul)
			count++;

		xorvalue = xorvalue >> 1;
	}
	return (count);
}

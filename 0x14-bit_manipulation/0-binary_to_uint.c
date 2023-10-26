#include "main.h"
/**
 * binary_to_uint - a function that convert binary number to unsigned int
 * @b: pointer to char that will be converted
 * Return: return the converted binary to decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}

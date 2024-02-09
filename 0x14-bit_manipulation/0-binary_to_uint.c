#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function that convert binary to unint
* @b: take char to convert it to unint
* Return: unsigned int, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' || *b != '1')
			return (0);

		result = (result << 1) | (*b++ - '0');
	}
	return (result);
}

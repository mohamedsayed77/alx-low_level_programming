#include "main.h"

/**
 * *_memset -  is used to set  block of memory to a specified
 *	value with a particular byte vlaue.
 * @s : pointer to the memory
 * @b : the constant byte that will be used to fill the memory
 * @n : the number of bytes to fill with the constant byte.
 * Return: return the pointer 's'
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

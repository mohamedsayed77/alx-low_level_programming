#include "main.h"

/**
 * *_memcpy -  is used to copy the content of the src arry
 *	to the dest arry.
 * @dest: pointer to the memory
 * @src: pointer to the memory
 * @n : the number of bytes to copy from src to dest
 * Return: return the pointer 'dest'
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

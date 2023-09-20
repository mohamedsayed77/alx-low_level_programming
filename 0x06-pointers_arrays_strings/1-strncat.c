#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 * @n: specify the num of characers that will concatnate
 * Return: dest concatenated to src by specifying the num of characters of src
*/

char *_strncat(char *dest, char *src, int n)
{

	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);


}

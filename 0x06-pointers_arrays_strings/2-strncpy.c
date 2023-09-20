#include "main.h"

/**
 * *_strncpy -  a function that copies a string
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 * @n : the maximum num of character will be copied
 *
 * Return: dest str copied to dest depending on the n
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	dest[n] = '\0';
	return (dest);
}

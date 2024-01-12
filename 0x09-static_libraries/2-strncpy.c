#include "main.h"

/**
 * *_strncpy -  a function that copies a string
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 * @n : the maximum num of character will be copied
 *
 * Return:  str copied to dest depending on the n
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{

		dest[i] = '\0';
		i++;

	}
	return (dest);


}

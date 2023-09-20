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

	char *dest_end = dest;


	while (*dest_end != '\0')
		dest_end++;

	strncat(dest, src, n);
	return (dest);
}

#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 *
 * Return: dest concatenated to src
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

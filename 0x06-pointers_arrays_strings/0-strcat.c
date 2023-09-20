#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest: take a string 
 8 @src: take a string
 *
 * Return: dest concatenated to src
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return dest;
}

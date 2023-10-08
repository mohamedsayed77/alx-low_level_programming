#include "main.h"

/**
 * *string_nconcat - a function that concatenate 2 string in alocated memory
 * @n: the maxmimum number of characters to concatenate from s2
 * @s1: the first string
 * @s2: the second string
 * Return: return pointer to alocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int len1, len2;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= strlen(s2))
		n = len2;

	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	strcpy(p, s1);
	strncat(p, s2, n);

	return (p);
}

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

	int len1, len2, i, j;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}

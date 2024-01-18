#include "main.h"

/**
* string_nconcat - a function that concatenare 2 string
* @s1: the first string to concatenate
* @s2: the second string to concatenate
* @n: specified bytes of s2 to concatenate
* Return: return pointer to array of concatenated 2 strings
* or NULL if fail
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *arr;

	int len1 = strlen(s1), len2 = strlen(s2);

	if (*s1 == '\0')
		*s1 = "";

	if (*s2 == '\0')
		*s2 = "";

	arr = malloc(len1 + n + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];

	for (j = 0; j < n; j++)
		arr[i++] = s2[j];

	arr[i] = '\0';

	return (arr);
}

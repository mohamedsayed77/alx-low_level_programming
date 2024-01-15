#include "main.h"
#include <string.h>

/**
* str_concat - a function that concatenates two array of string
* @s1: pointer to array of string to concatenate
* @s2: pointer to the second array of string to concatenate
* Return: pointer to the concatenated array , or NULL if fail
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1;
	int len2;
	char *arr;


	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	len1 = strlen(s1);
	len2 = strlen(s2);

	arr = malloc(((len1 + len2) * sizeof(char)) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - len1];
	}
	arr[i] = '\0';
	return (arr);
}

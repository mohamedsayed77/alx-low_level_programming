#include "main.h"


/**
 * _strlen - a function that find length of a string
 * @s: string
 * Return: int
*/



int _strlen(char *s)
{

	int len = 0;

	for (; s[len] != '\0'; len++)
		;

	return (len);
}


/**
 * *str_concat - a function that concatnate 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
*/


char *str_concat(char *s1, char *s2)
{

	int len1, len2, i;
	char *cat;


	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	cat = malloc((len1 + len2) * sizeof(char) + 1);

	if (cat == 0)
		return (0);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			cat[i] = s1[i];

	else
			cat[i] = s2[i - len1];
	}
	cat[i] = '\0';
	return (cat);
}

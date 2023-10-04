#include "main.h"

/**
 * *str_concat - a function that concatnate 2 string and return them
 * to allocation space
 * @s1: pointer to string
 * @s2 : pointer to string
 * Return: return concatnated string to allocation space
*/

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *cat;

	if (s1 == NULL)
		s1 = '\0';


	if (s2 == NULL)
		s2 = '\0';

	len1 = strlen(s1);
	len2 = strlen(s2);

	cat = (char *)  malloc(len1 + len2 + 1);

	if (cat == NULL)
		return (NULL);

	strcpy(cat, s1);
	strcat(cat, s2);

	return (cat);
}

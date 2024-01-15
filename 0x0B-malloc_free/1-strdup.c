#include "main.h"


/**
* _strdup - a function that duplicate array of string
* @str: pointer to array of string to duplicate
* Return: pointer to the duplicated array , or NULL if fail
*/

char *_strdup(char *str)
{

	char *arr;

	if (*str == NULL)
		return (NULL);

	arr = malloc(strlen(str) + 1);


	while (*str != NULL)
	{
		*arr = *str;
		arr++;
		str++;
	}
	*arr = '\0';
	return (arr);
}

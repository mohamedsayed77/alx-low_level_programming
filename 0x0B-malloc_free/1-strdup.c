#include "main.h"
#include <string.h>

/**
* _strdup - a function that duplicate array of string
* @str: pointer to array of string to duplicate
* Return: pointer to the duplicated array , or NULL if fail
*/

char *_strdup(char *str)
{

	char *arr;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	arr = malloc(len + 1);

	if (arr == NULL)
		return (NULL);

	while (*str != '\0')
	{
		*arr = *str;
		arr++;
		str++;
	}
	return (arr);
}

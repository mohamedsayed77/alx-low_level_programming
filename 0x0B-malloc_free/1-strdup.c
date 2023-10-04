#include "main.h"
#include <string.h>
/**
 * *_strdup - a function that duplicate a string
 * @str : pointer to string
 * Return: duplicated string
*/

char *_strdup(char *str)
{

	int length;
	int i;
	char *duplicate;


	if (str == NULL)
		return (NULL);

	length = strlen(str);


	duplicate = (char *) malloc(length + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

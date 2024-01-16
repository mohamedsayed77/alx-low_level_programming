#include "main.h"
#include <string.h>

/**
* argstostr - a function that concatenate arguments
* @ac: number of arguments
* @av: the arguments that will be concatenated
* Return: return pointer to string with concatenated string
* or NULL if fail
*/

char *argstostr(int ac, char **av)
{

	int i, j;
	char *result;


	int total_length = 0;
	int index = 0;



	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = malloc(total_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[total_length] = '\0';

	return (result);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
* is_valid_number - Checks if a string contains only digits
* @str: The string to be checked
*
* Return: 1 if the string contains only digits, 0 otherwise
*/


int is_valid_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}


/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array containing the command-line arguments
*
* Return: 0 on success, 98 on incorrect number of arguments or
*  non-digit inputs
*/


int main(int argc, char *argv[])
{

	int result;

	if (argc != 3 !is_valid_number(argv[1]) !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}

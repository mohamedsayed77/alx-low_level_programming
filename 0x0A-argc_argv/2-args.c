#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counts
 * @argv: its  array of string
 * Return: return 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

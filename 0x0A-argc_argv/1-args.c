#include <stdio.h>

/**
 * main - prints a numbers that passed into the program
 * @argc: argument counts
 * @argv: its  array of string
 * Return: return 0 (success)
*/

int main(int argc, char *argv[])
{

	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

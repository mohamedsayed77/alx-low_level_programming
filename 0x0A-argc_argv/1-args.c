#include <stdio.h>

/**
 * main - Prints the number of command line arguments
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

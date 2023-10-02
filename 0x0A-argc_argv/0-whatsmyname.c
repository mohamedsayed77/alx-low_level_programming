#include <stdio.h>

/**
 * main - prints a program name followed by a new line
 * @argc: argument counts
 * @argv: its  array of string
 * Return: return 0 (success)
*/

int main(int argc, char const *argv[])
{

	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counts
 * @argv: its  array of string
 * Return: return 0 (success)
*/

int main(int argc, char *argv[])
{

	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

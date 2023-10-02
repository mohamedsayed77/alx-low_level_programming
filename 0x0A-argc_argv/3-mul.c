#include <stdio.h>
#include <stdlib.h>


/**
 * main -  a program that prints sum of 2 numbers
 * @argc: argument counts
 * @argv: its  array of string
 * Return: return 0 (success), 1 if fail
*/

int main(int argc, char *argv[])
{

	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}


#include "main.h"

/**
 * printableASCII - determines if a n is a printable ascii char
 * @n: take integer
 * Return: it returns 1 if true, 0 if false
*/

int printableASCII(int n)
{
	return ((n >= 32 && n <= 126) || n == '\t');
}


/**
 * printHexes - print hexes values for string b int formatted form
 * @b: take string to print
 * @start : starting position
 * @end: ending position
*/

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < end)
	{
		printf("%02x", *(b + start + i));
		if (i % 2 == 1)
			printf(" ");
		i++;
	}
	printf("  ");

}

/**
 * printASCII - print ascii values for string b
 * @b: take a string
 * @start: starting position
 * @end: ending position
*/

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!printableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: take a string
 * @size : size of buffer
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}

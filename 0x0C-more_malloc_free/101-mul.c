#include "main.h"

/**
 * _puts - print a string
 * @str : pointer to the string
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _atoi - convert a string to an intger
 * @s : pointer to string
 * Return: integer converted
*/

int _atoi(const char *s)
{
	int sign = 1;
	int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
			sign *= -1;
	}
	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}


/**
 * print_int - print an intger
 * @n: int
 * Return: 0
*/

void print_int(int n)
{

	int divisor = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	_putchar('\n');
}


/**
 * main - print the result of the multiplication
 * @argc: int
 * @argv : list
 * Return: 0
*/


int main(int argc, char const *argv[])
{

	(void)argc;


	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}

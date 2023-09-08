#include <stdio.h>
/**
 * main - Entry pint
 * Description: a program that prints all single digit numbers of base
 * 10 with putchar
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{

		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}

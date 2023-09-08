#include <stdio.h>
/**
 * main - Entry pint
 * Description: a program that print the alphabet in lowercase and uppercase
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar('CH');
		ch++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry pint
 * Description: a program that print the alphabet in lowercase and uppercase
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z' || ch <= 'Z')
	{
		putchar(ch);

		if (ch == 'z')
		{
			ch = 'A';
		}
		else
		{
			ch++;
		}
	}
	putchar('\n');

	return (0);
}

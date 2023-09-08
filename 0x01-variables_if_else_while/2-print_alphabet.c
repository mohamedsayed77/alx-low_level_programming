#include <stdio.h>
/**
 * main - Entry pint
 * Description:a program that print alphabet with putchar
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	outchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that print alphabatec in reverse
 * Return: 0 (success)
*/

int main(void)
{

	char ch = 'z';

	while (ch >= 'a')
	{

		putchar(ch);
		ch--;
	}
	putchar('\n\);

	return (0);
}

#include <stdio.h>
/**
 * main - Entry pint
 * Description: a program that prints all single digit numbers of base 10
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}

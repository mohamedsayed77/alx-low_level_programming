#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz:);
		else if (num % 5 == 0)
			printf("Buzz");

		if (num < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

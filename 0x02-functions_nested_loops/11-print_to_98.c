#include "main.h"

/**
 * print_to_98 - print n to 98 counts.
 * @n: input.
 *
*/

void print_to_98(int n)
{
	int n = 10;

	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
			printf("%d", i);

		if (i != 98)
			printf(", ");

		else
			for (int i = n; i >= 98; i--)
				printf("%d", i);
			if (i != 98)
				printf(", ");
	}
	printf("\n");
}

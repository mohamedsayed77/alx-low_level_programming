include "main.h"


/**
 * check_prime - check all number < n if they can divide it
 * @n : int
 * @othrn : int
 * Return: int
 */

int check_prime(int n, int othrn);

int check_prime(int n, int othrn)
{

	if (othrn >= n && n > 1)
		return (1);

	else if (n % othrn == 0 || n <= 1)
		return (0);

	else
		return (check_prime(n, othrn + 1));
}

/**
 * is_prime_number - check if n is a prime number.
 * @n: takes int
 * Return: return 0 or 1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

include "main.h"

/**
 * check_prime - helper function to check if number is prime
 * @n: the candidate number to check if it is prime
 * @factor: the current factor to check against n
 * Return: 1 if n is prime, 0 otherwise
 */


int check_prime(int n, int factor)
{
	if (factor * factor > n)
		return (1);

	if (n % factor == 0)
		return (0);

	return (check_prime(n, factor + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, 0 if not
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}


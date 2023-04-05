#include "main.h"
int prime(int n, int a);
/**
 * is_prime_number - A function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: Iteger to check for prime number.
 *
 * Return: 1 if numberis a prime or 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - prime number recursively.
 * @n: number to scan
 * @a: Iterator.
 *
 * Return: 1 if number is prime or 0 otherwise.
 */
int prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime(n, a - 1));
}

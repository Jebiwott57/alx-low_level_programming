#include "main.h"
int square_root_recursion(int n, int a);
/**
 * _sqrt_recursion - A function that returns the
 * natural square root of a number.
 * @n: The integer with number to find square root of.
 *
 * Return: n square root.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (square_root_recursion(n, 0));
}

/**
 * square_root_recursion - recursion to find the natural number.
 * @n: The integer with number to find square root of.
 * @a: Iterator.
 *
 * Return: The resulting natural number.
 */
int square_root_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if ((a * a) == n)
		return (a);
	return (square_root_recursion(n, a + 1));
}

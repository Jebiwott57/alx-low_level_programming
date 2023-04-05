#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x to the power of y.
 * @x: The integer to find the power.
 * @y:  The power of the integer x.
 *
 * Return: integer power x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

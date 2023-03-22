#include "main.h"

/**
 * _abs - The absolute value of an integer
 * @n: Computing number
 * Return: Absolute value of the number or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}

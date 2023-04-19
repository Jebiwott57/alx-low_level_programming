#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of a and b.
 * @a: num to add on to.
 * @b: num to add.
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return difference of a and b.
 * @a: num to be subtracted from.
 * @b: num to subtract.
 * Return: sub.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of a and b.
 * @a: num  to multiply.
 * @b: num of times to multiply.
 * Return: mul.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the result of division of a by b.
 * @a: num to be divided.
 * @b: num to divide.
 * Return: div.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the remainder of division to a by b.
 * @a: num to be divided.
 * @b: num to divide.
 * Return: mod.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

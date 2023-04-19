#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - Select the corrrest function to perform
 * when called upon.
 * @s: Pointer to operator passed as an argument.
 * to the program.
 *
 * Return: pointer to the function corresponding to the
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL  && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

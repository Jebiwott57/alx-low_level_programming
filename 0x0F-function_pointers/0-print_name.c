#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: pointer to name to print.
 * @f: Pointer to function returning nothing
 * and calls a character pointer.
 *
 * Return: void.
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}

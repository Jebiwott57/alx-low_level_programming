#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name.
 * @argc: argument count.
 * @argv: argument vector to print.
 *
 * Return: 0 Always for success.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

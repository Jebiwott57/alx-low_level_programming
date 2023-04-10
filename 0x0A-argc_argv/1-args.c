#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector to print.
 *
 * Return 0 Always Success.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

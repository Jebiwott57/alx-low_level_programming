#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all arguments it recieves.
 * @argc: Argument count.
 * @argv: Argument vector (string) to print.
 *
 * Return: 0 Always Success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * find_num - Check for numbers.
 * @str: string to scan.
 *
 * Return: 0 Always Success.
 */
int find_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the sum of a string.
 * @argc: Argument count.
 * @argv: Argunebt vector (string of array).
 *
 * Return: 0 Always Success.
 */
int main(int argc, char *argv[])
{
	int count;
	int string_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (find_num(argv[count]))
		{
			string_to_int = atoi(argv[count]);
			sum += string_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	printf("%d\n", sum);
	return (0);
}

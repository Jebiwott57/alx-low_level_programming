#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	/* \t is a horizontal tab */
	putchar(i);
	if (i == '9')
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

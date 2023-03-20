#include <stdio.h>

/**
 * main - Entry point two digit combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i == j)
			{
				continue;
			}
			{
			putchar(i);
			putchar(j);
			}
			if (i == '8' && j == '9')
			{
				continue;
			}
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

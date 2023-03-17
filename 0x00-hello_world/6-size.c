#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %c byte(s)\n", (unsigned) sizeof (a));
	printf("Size of a int: %d byte(s)\n", (unsigned) sizeof (b));
	printf("Size of a long int: %ld byte(s)\n", (long unsigned) sizeof (c));
	printf("Size of a long long int: %lld byte(s)\n", (long long unsigned) sizeof (d));
	printf("Size of a float: %ld byte(s)\n", (long unsigned) sizeof (e));
	return (0);
}

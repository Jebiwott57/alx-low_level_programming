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

	printf("Size of a char: %u byte(s)\n", (unsigned char) sizeof(a));
	printf("Size of a int: %u byte(s)\n", (unsigned int) sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of a float: %u byte(s)\n", (unsigned int) sizeof(e));
	return (0);
}

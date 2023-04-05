#include "main.h"
int string_length(char *s);
int checker(char *s, int a, int length);
/**
 * is_palindrome - A function that returns 1 if a string is a palindrome and 0 if not.
 * @s: A pointer to be scanned.
 *
 * Return: 1 if string is palindrome or 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, string_length(s)));
}

/**
 * string_length - Check for string length.
 * @s: string to calculate string legnth.
 *
 * Return: string legnth.
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * checker - check recursively for palindrome.
 * @s: String to check.
 * @a: Iterator.
 * @length: Length of string.
 *
 * Return: 1 if palindrome or 0 otherwise.
 */
int checker(char *s, int a, int length)
{
	if (*(s + a) != *(s + length - 1))
		return (0);
	if (a >= length)
		return (1);
	return (checker(s, a + 1, length - 1));
}

#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The input string to check.
 * @start: The start index for comparison.
 * @end: The end index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Wrapper function for is_palindrome_recursive.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}


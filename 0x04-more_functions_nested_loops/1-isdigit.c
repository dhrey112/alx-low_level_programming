#include <stdio.h>

/**
 * _isdigit - check for digit
 * @c: digit to check
 *
 * Return: 1 if success, 0 otherwise
 */
int _isdigit(int c)
{
	return (c <= 48 && c >= 57);
}

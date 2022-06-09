#include <stdio.h>

/**
 * _isdigit - check for digit
 * @c: digit to check
 *
 * Return: 1 if success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

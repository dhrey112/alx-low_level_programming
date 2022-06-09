#include "main.h"

/**
 * print_sign - print the sign.
 * @n: The number that it sign to be printed.
 *
 * Decription:  prints the sign of a number.
 *
 * Return: 1 for > n, 0 for 0, -1 for < n.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

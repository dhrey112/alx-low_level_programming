#include "main.h"

/**
 * print_most_numbers - print most number
 *
 * Decription: a function that prints the numbers
 */
void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}


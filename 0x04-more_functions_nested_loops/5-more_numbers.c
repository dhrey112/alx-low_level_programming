#include "main.h"

/**
 * more_numbers - print number
 *
 * Description: a function that prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}

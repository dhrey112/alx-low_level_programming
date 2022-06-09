#include "main.h"

/**
 * print_alphabet_x10 - A function that has no return value
 *
 * Description: Print lowercase letters 10 times
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	count = 1;

	while (count <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		count++;
	}
}

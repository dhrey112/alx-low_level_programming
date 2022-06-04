#include <stdio.h>

/**
 * main - Entry
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

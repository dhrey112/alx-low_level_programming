#include <stdio.h>

/**
 * main - Starter
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 * as a char
 *
 * Return: 0, if success
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}


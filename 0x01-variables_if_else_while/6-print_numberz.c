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
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>

/**
 * main - Entry
 *
 * Description:  prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int number;
	char letter;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

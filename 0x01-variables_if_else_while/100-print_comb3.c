#include <stdio.h>

/**
 * main - Entry
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int digitOne, digitTwo;

	for (digitOne = 48; digitOne <= 56; digitOne++)
	{
		for (digitTwo = 49; digitTwo <= 57; digitTwo++)
		{
			if (digitTwo > digitOne)
			{
				putchar(digitOne);
				putchar(digitTwo);
				if (digitOne != 56 || digitTwo != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

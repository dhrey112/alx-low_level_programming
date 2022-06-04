#include <stdio.h>

/**
 * main - Entry
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int digitOne, digitTwo, digitThree;

	for (digitOne = 48; digitOne <= 55; digitOne++)
	{
		for (digitTwo = 49; digitTwo <= 56; digitTwo++)
		{
			for (digitThree = 50; digitThree <= 57; digitThree++)
			{
				if (digitOne < digitTwo && digitTwo < digitThree)
				{
					putchar(digitOne);
					putchar(digitTwo);
					putchar(digitThree);
					if (digitOne != 55 || digitTwo != 56 || digitThree != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

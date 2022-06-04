#include <stdio.h>

/**
 * main - Program entry
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: 0, if success.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}

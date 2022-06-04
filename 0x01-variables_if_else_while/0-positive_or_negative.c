#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The program entry
 *
 * Description: print whether the number stored in
 * the variable n is positive or negative.
 *
 * Return: If success, return 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

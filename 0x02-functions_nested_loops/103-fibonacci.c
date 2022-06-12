#include <stdio.h>

/**
 * main - print the first fibonacci number
 *
 * Return: Always 0'
 */
int main(void)
{
	int i;
	long int sum, num1, num2, fibNum;

	num1 = 1;
	num2 = 2;
	sum = fibNum = 0;
	while (fibNum <= 4000000)
	{
		fibNum = num1 + num2;
		num1 = num2;
		num2 = fibNum;
		if (num1 % 2 == 0)
		{
			sum += num1;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

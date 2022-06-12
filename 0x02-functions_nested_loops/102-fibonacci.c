#include <stdio.h>

/**
 * main - print the first fibonacci number
 *
 * Return: Always 0'
 */
int main(void)
{
	int i;
	long int num1, num2, fibNum;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		fibNum = num1 + num2;
		num1 = num2;
		num2 = fibNum;
		printf(", %ld", fibNum);
	}
	printf("\n");
	return (0);
}

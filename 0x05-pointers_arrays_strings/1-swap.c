#include "main.h"

/**
 * swap_int - Swap the values.
 * @a: value to swap
 * @b: value to swap
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

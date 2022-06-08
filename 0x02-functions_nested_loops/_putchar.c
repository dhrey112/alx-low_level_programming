#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character to stdout
 *
 * Description: a program that prints _putchar
 * @c: The character to print
 *
 * Return: 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

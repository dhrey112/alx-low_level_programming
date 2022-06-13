#include "main.h"

/**
 * _strlen - Return the lenght of a string.
 * @s: the string to check
 * Return: an integer.
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

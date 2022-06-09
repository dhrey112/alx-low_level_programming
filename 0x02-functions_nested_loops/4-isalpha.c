#include "main.h"

/**
 * _isalpha - It check alphabet
 * @c: the character to check
 *
 * Decription: A function that check if this is alphabet
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'A' && c <= 'Z' && c <= 'a' && c <= 'z');
}

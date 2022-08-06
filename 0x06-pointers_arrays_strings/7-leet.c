#include "main.h"

/**leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *str)
{
	int i;
	int j;

	char *letter = "aAeEoOTtLl";
	char *digit = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = digit[j];
			}
		}
	}
	return (str);
}

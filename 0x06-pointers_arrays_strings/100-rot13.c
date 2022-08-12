#include "main.h"

/**
 * rot13- Encode a string using rot13
 * @str: String to encode
 *
 * Return: return the encoded string (str)
 */
char *rot13(char *str)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}
	return (str);
}

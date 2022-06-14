#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, firstLen, secondLen;

	firstLen = 0;
	secondLen = 0;

	while (*(s + i) != '\0')
	{
		firstLen++;
	}

	secondLen = firstLen - 1;

	for (i = 0; i < firstLen / 2; i++)
	{
		tmp = s[i];
		s[i] = s[secondLen];
		s[secondLen--] = tmp;
	}
}

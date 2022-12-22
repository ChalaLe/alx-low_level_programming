#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int i = 0, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (*(s + i))
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
		i++;
	}
	return (s);
}

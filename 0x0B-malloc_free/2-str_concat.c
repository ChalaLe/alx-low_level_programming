#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *strout;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	strout = (char *)malloc(sizeof(char) * (len + 1));
	if (strout == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		strout[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		strout[i] = s2[j];

	strout[len] = '\0';
	return (strout);
}

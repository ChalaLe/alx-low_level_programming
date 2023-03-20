#include "main.h"

/**
 * _islower - Checks the character if it is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 for lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

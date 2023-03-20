#include "main.h"

/**
*_isalpha - check if it is alphabate
*@c: checked if it is alphabete
*Return: 1 if it is letter, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @n: the size of the memory to print
 * @s: the address of memory to print
 * @b: memory area pointer
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}

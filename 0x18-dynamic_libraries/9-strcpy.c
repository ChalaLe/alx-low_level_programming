#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 *		to the buffer pointed to by dest
 * @src: char to be checked
 * @dest: char to be checked
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

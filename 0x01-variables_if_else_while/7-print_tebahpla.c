#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry in to main
*printf reverse lowercase alphabate
*Return: 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

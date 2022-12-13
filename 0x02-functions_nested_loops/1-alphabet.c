#include "main.h"

/**
 * print the alphabets in lowercase
 * next line
 * 
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
	return (0);
}

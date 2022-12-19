#include "main.h"

/**
 * _puts - print a string followed by new line
 * @str: input string
 * Return: length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

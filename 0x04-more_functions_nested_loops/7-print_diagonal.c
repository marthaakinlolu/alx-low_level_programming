#include "main.h"

/**
 * print_diagonal - printing diagonal lines
 * @n: number of time to print character
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

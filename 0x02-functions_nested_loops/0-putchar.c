#include <main.h>

/**
 * main - Write a program that prints _putchar.
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char alx[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(alx); c++)
	{
		putchar(alx[c]);
	}
	putchar('\n');

	return (0);
}

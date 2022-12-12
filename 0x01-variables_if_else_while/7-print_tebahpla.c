#include <stdio.h>

/**
 * main - print alphabets in a reverse order.
 *
 * Return: 0
 */
int main(void)
{
	char apha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > -1; i--)
	{
		putchar(apha[i]);
	}
	putchar('\n');
	return (0);
}

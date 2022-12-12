#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print all letters except q and e.
 *
 * Return: 0
 */
int main(void)
{
	char apha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (apha != 'e' && apha != 'q')
		{
			putchar(apha[i]);
		}
	}
	putchar('\n');
	return (0);
}

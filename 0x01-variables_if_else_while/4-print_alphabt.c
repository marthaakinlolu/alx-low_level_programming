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

	for (apha = 'a'; apha <= 'z'; apha++)
	{
		if (apha != 'e' && apha != 'q')
		{
			putchar(apha[i]);
		}
	}
	putchar('\n');
	return (0);
}

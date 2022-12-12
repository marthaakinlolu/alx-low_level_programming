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
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <24; i++)
	{
		if (i != 4 && i !=16)
		{
			putchar(alpha[i]);
		}
	}
	putchar('\n');
	return (0);
}

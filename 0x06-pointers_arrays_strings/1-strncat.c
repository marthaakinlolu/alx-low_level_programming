#include "main.h"

/**
 * _strncat - concat two strings
 * @dest: destination of string
 * @src: source of string
 * @n: length of int
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for(j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

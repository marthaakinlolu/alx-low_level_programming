#include "main.h"

/**
 * _strlen - return length of a string
 * @s: char to check
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

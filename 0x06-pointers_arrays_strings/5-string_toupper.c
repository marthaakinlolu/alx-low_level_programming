#include "main.h"

/**
 * string_toupper - change lowercae to uppercase
 * @s: input string
 * Return: the pointer to dest
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}

#include "main.h"
/**
 * swap_int - swap the values of two integer
 * @a: first integer
 * @b: secong integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints the numbers 1 to 100 where
 * Fizz for multiples of 3
 * Buss for multiples of 5
 * FizzBuss for multiples of both
 * Return: 0
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 15 == 0)
				printf("FizzBuss");
			else if (i % 3 == 0)
				printf("Fizz");
			else if (i % 5 == 0)
				printf("Buss");
			else
				printf("%i", i);
			if (i < 100)
				printf(" ");
		}
	printf("\n");
	return (0);
}

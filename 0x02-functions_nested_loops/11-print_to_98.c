#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n : number to start from
* Return: n to 98 range
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}

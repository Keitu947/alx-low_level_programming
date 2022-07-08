#include "main.h"

/**
* print_square - prints a square, followed by a new line.
* @size : number of _ to be printed
* Return:void
*/
void print_square(int size)
{
	int i = 0;

	while (i < size && size > 0)
	{
		int x = 0;

		while (x < size)
		{
			_putchar('#');
			x++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}

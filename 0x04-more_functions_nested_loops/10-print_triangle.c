#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size : integer type
* Return:void
*/
void print_triangle(int size)
{
	int i = 1;

	while (i <= size && size > 0)
	{
		int x = 0;

		while (x < size - i)
		{
			_putchar(' ');
			x++;
		}
		int y = 0;
		while (y < i)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}

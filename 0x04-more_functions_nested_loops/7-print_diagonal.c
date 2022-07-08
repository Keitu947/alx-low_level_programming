#include "main.h"

/**
* print_diagonal - draws a diagonal line on the termina
* @n : number of \\ to be printed
* Return:void
*/
void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		int x = 0;

		while (x < i)
		{
			_putchar(' ');
			x++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}

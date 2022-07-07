#include "main.h"

/**
* print_numbers -  prints 10 times the numbers, from 0 to 14
* Return: 0
*/
void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

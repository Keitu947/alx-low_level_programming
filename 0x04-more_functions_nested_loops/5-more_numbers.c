#include "main.h"

/**
* print_numbers -  prints 10 times the numbers, from 0 to 14
* Return: 0
*/
void more_numbers(void)
{
	char n, c;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}

			_putchar('0' + c);
		}
		_putchar('\n');
	}
}

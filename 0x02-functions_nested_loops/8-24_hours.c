#include "main.h"
/**
* jack_bauer - print every minute of the day
* Return: void
*/
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');

			++b;
		}

		++a;
	}
}

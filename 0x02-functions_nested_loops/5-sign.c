#include "main.h"
/**
 * print_sign - entry point
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
   	int number;

	if (n > 0)
	{
		number = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		number = 0;
		_putchar('0');
	}
	else
	{
		number = -1;
		_putchar('-');
	}
	return (number);
}

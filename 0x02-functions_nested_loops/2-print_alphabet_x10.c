#include "main.h"

/**
* print_alphabet_x10 - prints alphabet in lower case x 10.
*
* Return: Always 0 (Success)
* */

void print_alphabet_x10(void)
{
	int x = 0;

	for  (x = 0; x < 10; x++)
       	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		_putchar(str[size]);
		size+=2;
	}

	_putchar('\n');
}

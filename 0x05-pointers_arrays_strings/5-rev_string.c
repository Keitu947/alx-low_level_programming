#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int size = 0, i = 0;
	char temp;

	while (s[size] != '\0')
		size++;

	while (i < size--)
	{
		temp = s[i];
		s[i++] = s[size];
		s[size] = temp;
	}
}

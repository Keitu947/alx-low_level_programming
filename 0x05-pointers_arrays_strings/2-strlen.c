#include "main.h"
#include <stddef.h>

/**
* _strlen - returns the length of a string
* @s:  char pointer
* Return: length of a string
*/
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != NULL)
	{
		size++;
	}

	return (size);
}
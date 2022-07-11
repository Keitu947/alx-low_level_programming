#include "main.h"

/**
* _strlen - returns the length of a string
* @s:  char pointer
* Return: length of a string
*/
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}

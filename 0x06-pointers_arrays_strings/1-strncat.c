#include "main.h"

/**
* _strncat - Concatenates two strings using at most
*            an store number of bytes from src.
* @dest: The string to be attach upon.
* @src: The string to be attach to dest.
* @n: The number of bytes from src to be attach to dest.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);
}

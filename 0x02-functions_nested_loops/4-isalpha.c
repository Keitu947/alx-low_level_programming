#include "main.h"

/**
 * _isalpha - checks for lower or upper case letter
 * @c : character to check the case
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

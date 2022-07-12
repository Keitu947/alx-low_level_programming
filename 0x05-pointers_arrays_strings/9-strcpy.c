/**
* _strcpy - a function that copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
*
* @dest: A pointer to destination of string
* @src: A pointer to source string to copy from
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	int size = 0;

	while (src[size] != '\0')
	{
		*dest++ = *src++;
		size++;
	}
	return (temp);
}

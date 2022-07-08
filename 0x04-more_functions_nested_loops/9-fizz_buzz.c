#include <stdio.h>

/**
* main - prints the numbers from 1 to 100, includes modulus division of 3 and 5 conditions
*
* Return: void.
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}

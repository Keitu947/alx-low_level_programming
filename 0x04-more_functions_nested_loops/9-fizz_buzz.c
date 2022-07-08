#include <stdio.h>
/**
* main - prints the numbers from 1 to 100, includes modulus division of 3 and 5 conditions
*
* Return: void.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
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
	}
	putchar('\n');
	return (0);

}

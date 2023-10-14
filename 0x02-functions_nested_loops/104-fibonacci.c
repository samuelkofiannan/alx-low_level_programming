#include <stdio.h>

/**
 * main - The main function
 * 1 and 2, seperated by a comma
 * Return: 0
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, fib3;

	printf("%d, %d", fib1, fib2);

	for (int i = 3; i <= 98; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;

		printf(", %d", fib3);
	}

	printf("\n");
	return (0);
}

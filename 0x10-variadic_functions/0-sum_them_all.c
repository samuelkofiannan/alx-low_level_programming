#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return:0, If n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ka;
	unsigned int i, sum = 0;

	va_start(ka, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ka, int);

	va_end(ka);

	return (sum);
}

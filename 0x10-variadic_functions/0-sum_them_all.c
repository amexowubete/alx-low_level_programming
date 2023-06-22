#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum of all its parameter
 * @n: the number of parameter that passed to function
 * @...: a variabele number of parameters to calculate the sum of
 *
 * Return: the result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;
		va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

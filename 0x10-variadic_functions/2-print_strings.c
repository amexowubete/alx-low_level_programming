#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that print strings
 * @separator: the sting to be printed between strings
 * @n: the number of strings that passed to function
 * @...: A variable a number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;
		va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

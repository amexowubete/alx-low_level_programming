#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a function that converts binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
		if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = 2 * i + (*b - '0');
		b++;
	}
	return (i);
}

#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * the two digit must be different
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;
		for (n = 48; n <= 56; n++)
	{
		for (m = n + 1; m <= 57; m++)
			if (n || m)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}

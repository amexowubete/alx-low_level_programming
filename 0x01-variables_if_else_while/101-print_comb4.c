#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m, i;

	for (n = 48; n <= 55; n++)
	{
		for (m = n + 1; m <= 56; m++)
		for (i = m + 1; i <= 57; i++)
		{
			if (m || n || i)
			{
				putchar(n);
				putchar(m);
				putchar(i);
				if (n != 55 || m != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

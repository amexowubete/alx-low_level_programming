#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * separated by ,, followed by a space
 * Return: Always 0
 */
int main(void)
{
	int n;
		for (n = 48; n <= 57; n++)
		{
			putchar(n);
			if (n != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}

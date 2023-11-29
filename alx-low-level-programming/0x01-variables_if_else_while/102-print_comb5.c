#include <stdio.h>
/**
 *main - Entry program that prints combinations
 *Combinations of two digit numbers 0 to 99 separated by a space
 *Return: Always 0 Success
*/
int main(void)
{
	int m, n;

	for (m = 0; m <= 99; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(',');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m <= 98 && n <= 99)
			{
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

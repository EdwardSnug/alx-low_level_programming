#include "main.h"
/**
  *print_diagonal - A function that draws a diagonal line
  *
  *@n: Number of times to draw
  *
  */
void print_diagonal(int n)
{
	if (n <= '0')
	{
		_putchar ('\n');
	}
	else
	{
		int i;
		int s;

		for (i = 1; i <= n; i++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == 1)
				{
					_putchar('\\');
				}
				else if
				{
					_putchar(' ');
				}
				_putchar ('\n');
			}
		}
	}
}

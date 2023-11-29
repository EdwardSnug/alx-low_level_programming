#include "main.h"
/**
  *print_line - A function that draws a straight line
  *
  *@n: Number of times to draw
  *
  */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}


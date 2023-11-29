#include "main.h"
/**
  *more_numbers - Prints 0 to 14 ten times
  */
void more_numbers(void)
{
	int i;
	int n;

	n = 1;
	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar ('1');
			}
			_putchar ((i % 10) + '0');
		}
		_putchar ('\n');
		n++;
	}
}

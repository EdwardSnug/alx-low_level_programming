#include "main.h"
/**
  *print_binary - A function that prints the binary notation of a number
  *
  *@n: Decimal number for conversion
  */
void print_binary(unsigned long int n)
{
	int i, flag;

	flag = 0;
	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		unsigned long int operator;

		operator = n >> i;
		/* An if statement to evaluate if TRUE it prints 1*/
		if (operator & 1)
		{
			_putchar ('1');
			flag++;
		}
		else if (flag)
			_putchar ('0');
	}
	if (!flag)
		_putchar ('0');
}

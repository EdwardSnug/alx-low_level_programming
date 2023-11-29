#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - A function that prints the given numbers
  *
  *@separator: String to be printed between the numbers
  *@n: Integer number values
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		printf("%d", number);
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}

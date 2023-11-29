#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - A variadic function that prints strings
  *
  *@separator: String to be printed between our strings
  *@n: Number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(strings);
	printf("\n");
}

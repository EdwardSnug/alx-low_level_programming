#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - A function that prints on any datatype format
  *
  *@format: A list of the types of arguments passed to our function
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char *separator = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					string = va_arg(all, char*);
					if (!string)
					{
						string = "(nil)";
					}
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(all);
	printf("\n");
}

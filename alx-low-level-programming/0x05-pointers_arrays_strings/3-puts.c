#include "main.h"
/**
  *_puts - function that prints a string
  *
  *@str: string to print to standard output
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}

#include "main.h"
/**
  *puts_half - prints half of a string
  *
  *@str: pointer variable to store our values
  */
void puts_half(char *str)
{
	int prt;

	prt = 0;
	while (*str != '\0')
	{
		prt++;
		str++;
	}
	str -= (prt / 2);

	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}


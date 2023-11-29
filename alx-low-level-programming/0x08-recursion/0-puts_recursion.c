#include "main.h"
/**
  *_puts_recursion - A function that prints a string.
  *
  *@s: String variable to be output to standard output
  *
  *Return: returns the string variable
  */
void _puts_recursion(char *s)
{
	/*Base case*/
	if (*s == '\0' || *s == '0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}

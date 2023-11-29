#include "main.h"
/**
  *_print_rev_recursion - Prints string literals in a string
  * variable in reverse
  *
  *@s: String literals stored in the variable
  *
  *Return: returns 's' in reverse string order
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0' || *s == '0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}

#include "main.h"
/**
  *_strlen_recursion - A fxn that returns length of a string
  *
  *@s: String literals in the variable 's'
  *
  *Return: returns length or 0 on success
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0' || *s == '0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

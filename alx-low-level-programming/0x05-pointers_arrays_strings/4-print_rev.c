#include "main.h"
/**
  *print_rev - prints a string in reverse
  *
  *@s: string*
  */
void print_rev(char *s)
{
	int myword;
	int rev;

	myword = 0;
	while (*s != '\0')
	{
		myword++;
		s++;
	}

	s--;

	for (rev = myword; rev > 0; rev--)
	{
		_putchar (*s);
		s--;
	}
	_putchar('\n');
}

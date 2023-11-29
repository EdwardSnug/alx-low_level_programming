#include "main.h"
/**
 * _isdigit - a function checks for a digit(0 through 9)
 *
 *@c: placholder for char to be checked
 *
 *Return: 1 if TRUE 0 if FALSE
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

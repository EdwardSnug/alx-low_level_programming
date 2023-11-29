#include "main.h"
/**
  *_isalpha - Function that checks for alphabetic character
  *
  *@c: Placeholder for letters
  *
  *Return: On success 1 on failure 0
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

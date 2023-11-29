#include "main.h"
/**
 *_islower - Checks for a lowercase letter
 *
 *@c: Placeholder for lowercase characters
 *
 *Return: if success 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

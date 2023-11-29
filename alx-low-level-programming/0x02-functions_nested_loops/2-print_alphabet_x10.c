#include "main.h"
/**
 *print_alphabet_x10 - Prints lowercase syllables ten times
 */
void print_alphabet_x10(void)
{
	char lowcase;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		{
			_putchar(lowcase);
		}
		_putchar('\n');
	}
}

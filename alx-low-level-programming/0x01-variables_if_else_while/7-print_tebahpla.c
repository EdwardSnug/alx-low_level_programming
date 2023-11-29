#include <stdio.h>
/**
*main - Entry program display alphabet in reverse
*
*Return: always 0 successful
*/
int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
	{
		putchar(lowcase);
	}
	putchar('\n');
	return (0);
}

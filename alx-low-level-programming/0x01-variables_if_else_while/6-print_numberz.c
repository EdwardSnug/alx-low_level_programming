#include <stdio.h>
/**
 *main - Entry of program printing digit numbers
 *
 *Return: Always 0 successful
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

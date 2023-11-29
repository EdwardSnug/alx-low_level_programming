#include <stdio.h>
/**
 *main - Entry for program printing base 16 numbers
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	char hex1;
	char hex2;

	for (hex1 = '0'; hex1 <= '9'; hex1++)
	{
		putchar(hex1);
	}
	for (hex2 = 'a'; hex2 <= 'f'; hex2++)
	{
		putchar (hex2);
	}
	putchar('\n');
	return (0);
}

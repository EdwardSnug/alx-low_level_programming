#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  *main - Entry for program
  *
  *@argc: Command line arguments count
  *@argv: 1d array of command line arguments strings.
  *
  *Return: return 0 on success
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *str;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (j = 0; j < strlen(str); j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(str);
			str++;
		}
		printf("%d\n", sum);
	}
	return (0);
}

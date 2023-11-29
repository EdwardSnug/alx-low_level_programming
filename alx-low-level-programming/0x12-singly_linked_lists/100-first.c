#include <stdio.h>
/**
  *pre_main - A function that runs before themain program is excuted
  *
  */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

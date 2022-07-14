#include <stdio.h>

void __attribute__((constructor)) tortoise(void);
/**
 * tortoise - prints before main
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

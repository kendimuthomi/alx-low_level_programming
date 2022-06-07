#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print frm any number to 98
 *
 * @n: the number
 */
void print_to_98(int n)
{
	int c;
<<<<<<< HEAD

	if (n < 98)
=======
	
	if (n > 98)
>>>>>>> 20c196863062acdd5db9df92cc6b5403bc2347f3
		for (c = n; c > 98; c--)
			printf("%d, ", c);
	else
		for (c = n; c < 98; c++)
			printf("%d, ", c);
	printf("98\n");
}

#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: generates random valid passwords
 * Return: 0
 */
int main(void)
{
	int a;
	char b;

	srand(time(NULL));
	while (a <= 2465)
	{
		b = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	return (0);
}

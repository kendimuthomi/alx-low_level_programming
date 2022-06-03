#include<unistd.h>
/**
 * main- This is the entry point
 *
 * Description: printing a quote using thw write function in C
 * write(int fd, const void, size_t count)
 *
 * Return: 1(error)
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);
	return (1);
}

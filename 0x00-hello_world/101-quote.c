#include<unistd.h>
/**
 * main - Entry point
>>>>>>> 89870068321d919f840a88b263295dc4cf441dba
 *
 * Description: print a quote using write function
 *    write(int fd, const void *buf, count);
 * Return: 1(error)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}

#include <unistd.h>
/**
 * main - prints to the standard error
 * return: 1 on success
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Kopar,2015-10-19\n", 59);
	return (1);
}

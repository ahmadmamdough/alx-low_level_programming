#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: linux is a simple but genius OS
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, str, 59);
	return (1);
}

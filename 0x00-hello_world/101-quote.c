#include <stdio.h>
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

	fwrite(str, sizeof(str), sizeof(char), stderr);
	return (1);
}

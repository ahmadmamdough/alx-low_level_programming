#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this function prints lowercase alpahbit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 26; i++)
		putchar(c + i);
	c = 'A';
	for (i = 0; i < 26; i++)
		putchar(c + i);
	putchar('\n');

	return (0);
}

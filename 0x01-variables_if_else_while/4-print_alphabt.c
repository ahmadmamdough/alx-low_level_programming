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
	{
		if (c + i == 'e' || c + i == 'q')
			continue;
		putchar(c + i);
	}
	putchar('\n');

	return (0);
}

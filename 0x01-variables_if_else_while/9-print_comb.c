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

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			putchar('9');
			break;
		}
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'combinations of numbers'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{

			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(',');
			putchar(' ');
		}
			if (i == 99)
				putchar('\n');
		}
	}
	return (0);
}

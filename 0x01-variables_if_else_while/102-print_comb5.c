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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				x = i + 1;
				y = 0;
			}
			else
			{
				x = i;
				y = j + 1;
			}

			for (; x < 10; x++)
			{
				for (; y < 10; y++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(x + '0');
					putchar(y + '0');
					putchar(',');
					putchar(' ');
				}
			}
			if (j == 8)
				putchar('\n);
		}
	}
}

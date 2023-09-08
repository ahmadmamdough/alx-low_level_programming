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
	int u;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (u = j + 1; u < 10; u++)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 7)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
		if (i == 9)
			putchar('\n');
	}
	return (0);
}

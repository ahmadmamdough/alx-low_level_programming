#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print the 9 times table
 * Description: 'print the times table in a specific format'
 * @n: the number table
 * return: void
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int tmp;

	if (n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			tmp = i * j;
			if (j == 0)
				printf("0");
			else
			{
				if (tmp > 99)
					printf(" %d", tmp);
				else if (tmp > 9)
					printf("  %d", tmp);
				else
					printf("   %d", tmp);
			}

			if (j != n)
				printf(",");
		}
		printf("\n");
	}
}

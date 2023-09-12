#include "main.h"
/**
 * times_table - print the 9 times table
 * Description: 'print the times table in a specific format'
 * return: void
 *
 */
void times_table(void)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			tmp = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (tmp / 10 == 0)
					_putchar(' ');

			}

			if (tmp > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
				_putchar(tmp + '0');

			if (j != 9)
				_putchar(',');
		}
	}
}

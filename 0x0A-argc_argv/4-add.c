#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc:  number of command line argument
 * @argv:  array containing command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int tmp = 0;

	for (i = 1; i < argc; i++)
	{
		tmp = atoi(argv[i]);
		if (tmp == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += tmp;
	}
	printf("%d\n", result);

	return (0);
}

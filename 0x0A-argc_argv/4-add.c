#include <stdio.h>
#include <string.h>
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
	size_t j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'this is nothing but dumb'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int rem = n % 10;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5", n, rem);
	else if (n == 0)
		printf("last digit of %d is %d and is 0", n, rem);
	else
		printf("last digit of %d is %d and is less than 6 and not 0", n, rem);
	return (0);
}

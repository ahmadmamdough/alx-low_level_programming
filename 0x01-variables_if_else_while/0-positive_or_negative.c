#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * this is the main function to do absloutly nothing but it has to be documented
 *
 * main - Entry point
 *
 * Description: linux is a simple but genius OS
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
		printf("%d is positive\n", n);
	else if (n < 0) 
		printf("%d is negative\n", n);
	else 
		printf("%d is zero\n", n);
	return (0);
}

#include "main.h"
/**
 * swap_int - implementaion
 * @a: the first value to be swapped
 * @b: the second value
 * return:always void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

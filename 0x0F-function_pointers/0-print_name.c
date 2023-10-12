#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: the string
 * @f: the function
 */
void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && f != NULL)
		(*f) (name);
}

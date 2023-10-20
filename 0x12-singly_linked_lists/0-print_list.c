#include <stdio.h>
#include "lists.h"

/**
 * print_list - enrty point
 * h: head of file
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else 
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}

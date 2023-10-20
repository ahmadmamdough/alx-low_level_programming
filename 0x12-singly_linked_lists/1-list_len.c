#include <stdio.h>
#include "lists.h"

/**
 * list-len - enrty point
 * @h: head of file
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

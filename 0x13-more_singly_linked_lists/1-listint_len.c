#include "lists.h"

/**
 * listint_len - entry
 * @h: head
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
	}
	return (i);
}

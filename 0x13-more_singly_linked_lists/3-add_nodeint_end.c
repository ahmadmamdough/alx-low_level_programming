#include "lists.h"

/**
 * add_nodeint_end - entry
 * @h: head
 * @n: the node data
 * Return: new element
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *i = *h;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (new);

	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
	}
	else
	{
		while (i->next)
			i = i->next;
		i->next = new;
	}

	return (new);
}

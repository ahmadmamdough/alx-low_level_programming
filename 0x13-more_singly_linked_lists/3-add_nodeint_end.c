#include "lists.h"

/**
 * add_nodeint_end - entry
 * @h: head
 * @n: the node data
 * Return: new element
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *i = *h, *new = NULL;

	while (i->next)
		i = i->next;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (new);

	i->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}

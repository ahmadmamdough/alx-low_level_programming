#include "lists.h"

/**
 * listint_t *add_nodeint - entry
 * @h: head
 * @n: node data
 * Return: size of list
 */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *tmp = NULL;

	tmp = malloc(sizeof(listint_t));

	tmp->next = *h;
	tmp->n = n;

	return (tmp);

}

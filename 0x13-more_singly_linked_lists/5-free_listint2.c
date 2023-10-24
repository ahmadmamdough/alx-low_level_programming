#include "lists.h"

/**
 * free_listint2 - entry
 * @head: first element in list
 */
void free_listint2(listint_t **head)
{
	listint_t *i, *j;

	if (!*head)
		return;
	i = *head;

	while (i)
	{
		j = i->next;
		free(i);
		i = j;
	}

	*head = NULL;
}

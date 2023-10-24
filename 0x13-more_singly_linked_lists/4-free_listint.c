#include "lists.h"

/**
 * free_listint - entry
 * @head: first element in list
 */
void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	free(head);
}

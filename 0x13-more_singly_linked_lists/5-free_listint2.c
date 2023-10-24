#include "lists.h"

/**
 * free_listint2 - entry
 * @head: first element in list
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	if (head->next)
		free_listint2(head->next);
	free(head);
	
	*head = NULL;
}

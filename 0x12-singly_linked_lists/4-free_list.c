#include "lists.h"

/**
 * free_list - frees a whole list
 * @head: the list
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);

}

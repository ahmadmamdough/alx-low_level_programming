#include "lists.h"
/**
 * get_nodeint_at_index - access
 * @head: the list
 * @index: the index
 * Return: pointer to the item
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);

		head = head->next;
	}
	return (head);
}


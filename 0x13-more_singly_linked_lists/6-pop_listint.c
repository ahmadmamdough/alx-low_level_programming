#include "lists.h"

/**
 * pop_listint - remove first item
 * @head: address of head
 * Return: popped data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = head->next;

	free(tmp);

	return (data);
}

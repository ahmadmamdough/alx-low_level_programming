#include "lists.h"

/**
 * add_node - adds node in the beggining
 * @head: the linked list
 * @str: the new val fot the node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *h = *head;

	if (tmp == NULL)
		return (NULL);
	
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	
	tmp->next = h->next;
	h->next = tmp;

	return (tmp);
}

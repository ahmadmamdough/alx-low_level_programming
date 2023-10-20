#include "lists.h"

/**
 * add_node_end - adds node in the beggining
 * @head: the linked list
 * @str: the new val fot the node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *i = *head;

	if (!tmp)
		return (NULL);
	
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;
	
	
	while (i->next)
		i = i->next;

	i->next = tmp;

	return (tmp);
}

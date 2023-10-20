#ifndef _LISTS_
#define _LISTS_

/**
 * struct list_s - is ls node
 * @str: the string
 * @len: the length of str
 * @next: the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif

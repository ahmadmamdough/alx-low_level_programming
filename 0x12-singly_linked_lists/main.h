#ifndef _HEADER_
#define _HEADER_

size_t print_list(const list_t *h);

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

#endif

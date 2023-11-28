#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_list(const listint_t *h);
listint_t *add_node(listint_t **head, const int n);
void free_list(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */

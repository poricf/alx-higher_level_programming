#include "lists.h"

/**
 * check_cycle - check for loop in LL
 * @list: head of linked list
 *
 * Description - check for loops in LL
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	i = list;
	j = list->next;
	while (j && i && j->next)
	{
		if (j == i)
		{
			return (1);
		}
		i = i->next;
		j = j->next->next;
	}
	return (0);
}

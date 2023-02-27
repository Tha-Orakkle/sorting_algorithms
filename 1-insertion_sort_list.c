#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using inseryion algorithm
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *temp, *last;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;

	iter = (*list)->next;


	while (iter != NULL)
	{
		temp = iter->next;
		last = iter->prev;
		while (last && last->n > iter->n)
		{
			last->next = iter->next;
			if (iter->next)
				iter->next->prev = last;
			iter->prev = last->prev;
			iter->next = last;
			if (last->prev)
				last->prev->next = iter;
			else
				(*list) = iter;
			last->prev = iter;
			last = iter->prev;

			print_list(*list);
		}
		iter = temp;
	}
}

#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

void print_list_rev(const listint_t *list)
{
	int i;

	i = 0;
	while (list->next)
		list = list->next;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		list = list->prev;
		++i;
	}
	printf("\n");
}
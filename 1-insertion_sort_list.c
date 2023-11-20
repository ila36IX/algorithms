#include "sort.h"
/**
 * go_back - Shifting each element one place to the right
 * until a suitable position is found for the new element.
 *
 * @list: Pointer to pointer of the head of list
 * @walk_back: Pointer to the element the will be shifted
 * in the it left arrray
 * Return: Nothing
 */
void go_back(listint_t **list, listint_t *walk_back)
{
	while (walk_back->prev != NULL)
	{
		if (walk_back->prev->n > walk_back->n)
		{
			swap_nodes(list, walk_back->prev, walk_back);
			walk_back = walk_back->next;
			print_list(*list);
		}
		walk_back = walk_back->prev;
	}
}
/**
 * insertion_sort_list - Sort using insertion sort
 *
 * @list: Doubly linked list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *walk = (*list);

	while (walk)
	{
		if (walk != NULL || walk->n < walk->next->n)
			go_back(list, walk);
		walk = walk->next;
	}
}

/**
 * swap_nodes - swap two nodes
 *
 * @head: Pointer to pointer of the head
 * @node1: First node
 * @node2: Second node
 * Return: Nothing
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		(*head) = node2;
	if (node2->next)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node1->next = node2->next;
	node1->prev = node2;
	node2->next = node1;
}
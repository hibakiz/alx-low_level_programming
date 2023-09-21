#include "lists.h"
/**
 * free_list - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

void free_list(list_t *head)
{
	list_t *cur, *next;

	cur = head;
	while (cur != NULL)
	{
		next = cur->next;
		free(cur->str);
		free(cur);
		cur = next;
	}
}

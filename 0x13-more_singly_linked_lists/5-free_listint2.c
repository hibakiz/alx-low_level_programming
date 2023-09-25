#include "lists.h"
/**
 * free_listint2 - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *cur, *next;

	cur = *head;
	while (cur != NULL)
	{
		next = cur->next;
		if (next != cur)
			free(cur);
		cur = next;
	}
	*head = cur;
}

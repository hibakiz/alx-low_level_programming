#include "lists.h"
/**
 * free_listint - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

void free_listint(listint_t *head)
{
	listint_t *cur, *next;

	cur = head;
	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}

#include "lists.h"
/**
 * free_list - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free(head);
	head = NULL;
}

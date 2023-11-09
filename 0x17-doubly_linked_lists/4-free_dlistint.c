#include "lists.h"
/**
* free_dlistint - print the list
* @head: DLL
* Return: number
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur, *next;

	cur = head;
	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}

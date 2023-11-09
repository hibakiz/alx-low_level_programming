#include "lists.h"
/**
* get_dnodeint_at_index - print the list
* @head: DLL
* @index: int
* Return: number
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cur;

	cur = head;
	for (i = 0; i <= index; i++)
	{
		if (i != index)
			cur = cur->next;
		else
			return (cur);
	}
	return (NULL);
}

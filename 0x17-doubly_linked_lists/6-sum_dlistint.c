#include "lists.h"
/**
* sum_dlistint - print the list
* @head: DLL
*
* Return: number
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur;

	cur = head;
		while (cur)
		{
			sum += cur->n;
			cur = cur->next;
		}
	return (sum);
}

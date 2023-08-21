#include "main.h"
#include<stdio.h>
/**
 * print_array - Entry point
 *@a: int
 *@n: int
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(a + i + 1) == '\0')
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}

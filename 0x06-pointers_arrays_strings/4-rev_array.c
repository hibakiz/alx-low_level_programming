#include "main.h"
#include<stdio.h>
/**
 * reverse_array - Entry point
 *
 * Description: 'tsks'
 * @n: char
 * @a: char
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}

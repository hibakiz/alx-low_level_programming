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
	int i, tmp;

	n--;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}

}

#include "main.h"
#include<stdio.h>
/**
 * factorial - Entry point
 * Description: 'tsks'
 * @n: char
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	int i;

	if (n > 0)
		i = n * factorial(n - 1);
	else if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (i);




}

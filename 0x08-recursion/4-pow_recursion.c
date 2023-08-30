#include "main.h"
#include<stdio.h>
/**
 * _pow_recursion - Entry point
 * Description: 'tsks'
 * @x: char
 * @y: int
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y > 0)
		i = x * _pow_recursion(x, y - 1);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (i);




}

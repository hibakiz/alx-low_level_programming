#include "main.h"
#include<stdio.h>
/**
 * _sqrt_recursion - Entry point
 * Description: 'tsks'
 * @n: char
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int x);

	int x = 1;

	return (sqrt_fun(n, x));

}

/**
 * _sqrt_fun - Entry point
 * Description: 'tsks'
 * @n: char
 * @x: int
 * Return: Always 0 (Success)
 */
 
int sqrt_fun(int n, int x)
{
	if (n == x * x)
	{
		return (x);
	}
	else if (x < n)
	{
		return (sqrt_fun(n, ++x));
	}
	else
	{
		return (-1);
	}
}

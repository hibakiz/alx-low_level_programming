#include "main.h"
#include<stdio.h>
/**
 * is_prime_number - Entry point
 * Description: 'tsks'
 * @n: char
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	int prime_number(int x, int n);

	int x = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(x, n) != 0)
			return (1);
		else
			return (0);
	}
}

/**
 * prime_number - Entry point
 * Description: 'tsks'
 * @n: char
 * @x: int
 * Return: Always 0 (Success)
 */
 
int prime_number(int x, int n)
{
	if (x < n)
	{
		if (n % x == 0)
		{
			return (0);
		}
		else
		{
			++x;
			return (prime_number(x, n));
		}
	}
	else
	{
		return (1);
	}
}

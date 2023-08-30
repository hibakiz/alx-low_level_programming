#include "main.h"
#include<stdio.h>
/**
 * _strlen_recursion - Entry point
 * Description: 'tsks'
 * @s: char
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
		return (i);
	}
	else
		return (0);




}

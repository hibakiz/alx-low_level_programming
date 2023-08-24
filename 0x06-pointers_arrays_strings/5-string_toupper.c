#include "main.h"
#include<stdio.h>
/**
 * string_toupper - Entry point
 *
 * Description: 'tsks'
 * @str: zft
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);

}

#include "main.h"
#include<stdio.h>
/**
 * cap_string - Entry point
 *
 * Description: 'tsks'
 * @str: zft
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] -= 32;
		}
	}
	return (str);

}

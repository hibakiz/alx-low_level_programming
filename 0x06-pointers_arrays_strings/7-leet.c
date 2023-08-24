#include "main.h"
#include<stdio.h>
/**
 * leet - Entry point
 *
 * Description: 'tsks'
 * @str: zft
 *
 * Return: Always 0 (Success)
 */
char *leet(char *str)
{
	int i, j;
	char let[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (j == 0 || j == 1)
			{
				if (str[i] == let[j])
					str[i] = '4';
			}

			if (j == 2 || j == 3)
			{
				if (str[i] == let[j])
					str[i] = '3';
			}

			if (j == 4 || j == 5)
			{
				if (str[i] == let[j])
					str[i] = '0';
			}

			if (j == 6 || j == 7)
			{
				if (str[i] == let[j])
					str[i] = '7';
			}

			if (j == 8 || j == 9)
			{
				if (str[i] == let[j])
					str[i] = '1';
			}
			
		}

	}
	return (str);

}

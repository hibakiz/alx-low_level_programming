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
	char val[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (let[j] == str[i])
				str[i] = val[j];

	}
	}
	return (str);

}

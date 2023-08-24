#include "main.h"
#include<stdio.h>
/**
 * rot13 - Entry point
 *
 * Description: 'tsks'
 * @str: zft
 *
 * Return: Always 0 (Success)
 */
char *rot13(char *str)
{
	int i, j;
	char let[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char val[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (let[j] == str[i])
			{
				str[i] = val[j];
				break;
			}
	}
	}
	return (str);

}

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
	int i, j;
	char sp[] = ",;.!?(){}\n\t\" ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		for (j = 0; sp[j] != '\0'; j++)
		{
			if (sp[j] == str[i])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] -= 32;
		}
		}
	}
	return (str);

}

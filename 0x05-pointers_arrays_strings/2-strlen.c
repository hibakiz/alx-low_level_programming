#include "main.h"
/**
 * _strlen - Entry point
 *@s: int
 *
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int leng = 0;

	while (1)
	{
		if (*(s + leng) == '\0')
			break;
		leng++;
	}
	return (leng);
}

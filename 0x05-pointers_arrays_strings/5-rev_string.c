#include "main.h"
/**
 * rev_string - Entry point
 *@s: int
 *
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0;
	int leng = 0;
	char r[100];

	while (1)
	{
		if (*(s + leng) == '\0')
			break;
		leng++;
	}
	while (leng > 0)
	{
		r[i] = *(s + leng - 1);
		leng--;
		i++;
	}
	while (1)
	{
		if (*(s + leng) == '\0')
			break;
		*(s + leng) = r[leng];
		leng++;
	}
}

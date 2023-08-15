#include "main.h"
/**
 *  _isalpha - test if a char.
 * @c:  is the input
 *
 * Return:Always 0.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	return (1);
	else
	return (0);
}

#include "main.h"
/**
 * _abs - Computes the absolte value of an integar
 * @c: The number to be computed
 * Return: Abosolute value of number to zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

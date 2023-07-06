#include "main.h"
int actual_sqrt_recursion - returns the natural square root a number

/**
 * _sqrt_recursion - return the natural square root a number
 * @n: number to calculate the square root of
 * Return: The reslting square root
 */
int _sqrt_recusion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recures to find the natural
 * square root of a number
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

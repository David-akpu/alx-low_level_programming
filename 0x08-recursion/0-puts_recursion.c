#include "main.h"
/**
 * main: - Entry point
 * _puts_recusion: - Print a string followed by a new line
 * @s: The string to print
 * Return: Noting
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

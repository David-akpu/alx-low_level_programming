#include "main.h"
/**
 * _puts - prints
 * @str: the string
 * Return: 0
 */
void _puts(char *str)
{
       	int a = 0;
       	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}

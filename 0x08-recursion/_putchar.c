#include <unistd.h>
/**
 * this is my putchar
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

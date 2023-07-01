#include <stdio.h>
/**
 * main - Print the sum of even fibonacci numbers
 * less than 4000000
 * Return: Always (success)
 */
int main(void)
{
	long j = 1, k = 2, sum = k;

	while (k + j < 400000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++1;
	}
	printf("%ld\n", sum);
	return (0);
}

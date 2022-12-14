#include <stdio.h>
/**
 *main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 98; ++i)
	{
		if (j != 83621143489848422977)
		{
			printf("%lu, ", j);
		} else
		{
		printf("%lu\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}


#include <stdio.h>
/**
 * main - print if the number is a single base 10 digit
 *
 * Description: using the main function
 * this program prints single base 10 digit
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}

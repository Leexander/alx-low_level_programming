#include <stdio.h>
/**
 * main - print alphabeth in reverse
 *
 * Description: using the main function
 * this program prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}

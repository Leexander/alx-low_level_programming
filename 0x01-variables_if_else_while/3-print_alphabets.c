#include <stdio.h>
/**
 * main - print if the function is valid
 *
 * Description: using the main function
 * this program prints the alphabets in both upper and lowercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

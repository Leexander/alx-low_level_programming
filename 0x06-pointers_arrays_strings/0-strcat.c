#include "main.h"

/**
*_strcat - concatenates  the string pointed to by @src to
* the end of the string pointed to by @dest
*@dest: String that will be appended
*@src: String to be concatenated upon
*
* Return: returns poiner to @dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}

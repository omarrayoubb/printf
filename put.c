#include "main.h"
#include "string.h"
/**
* put - print a char
* @c: char to print
* Description: print char to stdout
*
* Return: 1 byte
*/
int put(char c)
{
	static int limits;
	static char bu[BUFF_S];

	if (limits > 1023 || c == -1)
	{
		write(1, &bu, limits);
		limits = 0;
	}
	if (c != -1)
	{
		bu[limits] = c;
		limits++;
	}
	return (1);
}
/**
* putstring - print string
* @s: string to print
* Description: printing a string
*
* Return: bytes of string
*/
int putstring(char *s)
{
	unsigned int i;

	for (i = 0 ; i < strlen(s); i++)
		put(s[i]);
	return (i);
}

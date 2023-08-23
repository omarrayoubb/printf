#include "main.h"
/**
* findspec - define
* @s: character
* Description: make the right function for right specifier
*
* Return: function to be executed
*/
int (*findspec(char s))(va_list *)
{
	spec op[] = {
		{'c', printchar},
		{'s', printstring},
		{'d', printint}
	};
	int j = 0;

	for (j = 0; j < 3; j++)
	{
		if (op[j].c == s)
			return (op[j].func);
	}
	return (NULL);
}

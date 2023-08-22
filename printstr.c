#include "main.h"
#include "string.h"
/**
* printstring - connector
* @args: list of all arguments
* Description: connect stuct and printstring
*
* Return: number of bytes
*/
int printstring(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (!s)
		s = "(null)";
	putstring(s);
	return (strlen(s));
}

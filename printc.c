#include "main.h"
/**
* printchar - connector
* @args: list of arguments
* Description: connect struct and put function to print character
*
* Return: 1 when success and 0 if fails
*/
int printchar(va_list *args)
{
	char s = va_arg(*args, int);

	put(s);
	return (1);
}

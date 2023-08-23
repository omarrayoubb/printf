#include "main.h"
#include <string.h>
/**
* _printf - printf function
* @format: char string
* Description: print some string and other datatypes
* Return: number of bytes to be printed
*/
int _printf(const char *format, ...)
{
	int (*fu)(va_list *);
	const char *i;
	va_list args;
	int bytes = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format)
		return (-1);
	if ((format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	for (i = format; *i; i++)
	{
		if (*i == '%')
		{
			i++;
			if (*i == '%')
			{
				bytes += put('%');
				continue;
			}
			fu = findspec(*i);
			if (fu)
				bytes += fu(&args);
			else
				bytes += printf("%%%c", *i);
		}
		else
			bytes += put(*i);
	}
	put(-1);
	va_end(args);
	return (bytes);
}

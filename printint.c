#include "main.h"
/**
 * printint - function that orint numbers
 * @args:parameter
 * Return: bytes
*/
int printint(va_list *args)
{
	int num = va_arg(args, int), bytes = 0;

	if (num == 0)
	{
		put('0');
		return (1);
	}
	if (num < 0)
	{
		put('-');
		num = num * -1;
		bytes++;
	}
	bytes += pnums(num);
	return (bytes);
}
/**
 * pnums - print digits
 * @n: argument
 * Return: 0
*/
int pnums(int n)
{
	int count_digit = 0, x = n;
	int i, j;
	char* s;

	while (x > 0)
	{
		x = x / 10;
		count_digit++;
	}
	s = malloc(count_digit *  sizeof(char));
	for (i = 0; i < count_digit; i++)
	{
		s[i] = (n  % 10) + '0';
		n = n / 10;
	}
	for (j = count_digit - 1; j >= 0; j--)
	{
		put(s[j]);
	}
	return (0);
}

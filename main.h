#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define BUFF_S 1024
/**
* struct specifiers - struct for specifiers
* @c: character of specifier
* @func: function pointer
* Description: struct for specifiers to define which function i will use
*/
typedef struct specifiers
{
	char c;
	int (*func)(va_list *);
} spec;
int put(char c);
int putstring(char *s);
int pnums(int n);
int counter(int max);
int _printf(const char *format, ...);
int (*findspec(char s))(va_list *);
int printchar(va_list *arguments);
int printstring(va_list *arguments);
int printint(va_list *args);

#endif

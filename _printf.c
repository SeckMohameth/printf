#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/**
* print_c - prints a char
* @arg: the character argument
* Description - function prints a character argument
* Return: void
*/
void print_c(va_list arg)
{
	int n = va_arg(arg, int);
	write(1, &n, 1);
}

/**
* print_s - prints a string
* @arg: string to be printed
* Description - this function print a string argument
* Return: void
*/
void print_s(va_list arg)
{
	int n = 0;
	char *a = va_arg(arg, char *);

	while (a[n] != '\0')
	{
		n++;
	}
	write(1, a, n);
}

/**
* _printf - prints characters and strings
* @format: the operators and string to be printed
* Description - this function prints a string and chars
* Return: the string length or -1
**/

int _printf(const char *format, ...)
{
	va_list arg;
	int i, n;

	pair pai[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(arg, format);


	if (format == NULL && *format == '\0')
	{
		return(-1);
	}

	i = 0;
	while (format != NULL && *format != '\0')
	{
		n = 0;
		if (*format == '%')
		{
			format++;
			i++;
			if (*format == '%')
			{
			}
			while (pai[n].a != '\0')
			{
				if (*format == pai[n].a)
				{
					format++;
					i++;
					pai[n].ptr(arg);
				}
				n++;
			}
		}
		write(1, format, sizeof(char));
		format++;
		i++;
	}
	va_end(arg);
	return(i);
}

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
int print_c(va_list arg)
{
	int n = va_arg(arg, int);

	write(1, &n, 1);
	if (n == '\0')
		return (0);
	return (1);
}

/**
* print_s - prints a string
* @arg: string to be printed
* Description - this function print a string argument
* Return: void
*/
int print_s(va_list arg)
{
	int n = 0;
	char *a = va_arg(arg, char *);

	while (*a != '\0')
	{
		write(1, a, 1);
		n++;
		a++;
	}
	return (n);
}

/**
* print_p - prints %
* Return: 1
*/
int print_p(void)
{
	write(1, "%", 2);
	return (1);
}

/**
* printy - function that prints arguments
* @format: the string
* @arg: the arguments
* Description - this function links operators to actions
* Return: string length
*/
int printy(const char *format, va_list arg)
{
	int i = 0, n = 0, add = 0;

	pair pai[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'\0', NULL}
	};

	while (format != NULL && *format != '\0')
	{
		add = 0;
		n = 0;
		if (*format == '%')
		{
			format++;
			while (pai[n].a != '\0')
			{
				if (*format == pai[n].a)
				{
					format++;
					add = pai[n].ptr(arg);
					i = i + add;
				}
				n++;
			}
		}
		write(1, format, sizeof(char));
		format++;
		i++;
	}
	return (i);
}

/**
* _printf - prints characters and strings
* @format: the operators and string to be printed
* Description - this function prints a string and chars
* Return: the string length or -1
*/
int _printf(const char *format, ...)
{
	va_list arg;
	int i;

	va_start(arg, format);
	if (format == NULL && *format == '\0')
		return (-1);
	i = printy(format, arg);
	va_end(arg);
	return (i);
}

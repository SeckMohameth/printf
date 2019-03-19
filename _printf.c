#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"


void print_c(va_list arg)
{
	int n = va_arg(arg, int);
	write(1, &n, 1);
}

void print_s(va_list arg)
{
	int n = 0;
	char *a = va_arg(arg, char *);

	while (a[n] != '\0')
	{
		n++;
	}
	n = (sizeof(char) * n);
	write(1, a, n);
}

void print_per()
{
	write(1, "%", 1);
}

/**
* print
*
*
**/

int _printf(const char *format, ...)
{
	va_list arg;
	int i, n;

	pair pai[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_per},
		{'\0', NULL}
	};

	va_start(arg, format);

	i = 0;
	while (format != NULL && *format != '\0')
	{
		n = 0;
		if (*format == '%')
		{
			format++;
			i++;
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

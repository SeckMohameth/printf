#include "holberton.h"
#include <stdarg.h>
/**
*
*
*
**/

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, format);

	i = va_arg(arg, int);





	va_end(arg);
}

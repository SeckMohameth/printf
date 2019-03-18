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


        struct paring[] = {
                {'c', printf_c},
                {'s', printf_s},
                {'%', printf_f},
                {NULL, NULL}
	};


	va_start(arg, format);

	i = va_arg(arg, int);





	va_end(arg);
}

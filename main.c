#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
	char *str = "hello world";
    len = _printf("%%Let's try to printf a simple sentence.\n");
    len2 = printf("%%Let's try to printf a simple sentence.\n");
    //ui = (unsigned int)INT_MAX + 1024;
    //addr = (void *)0x7ffe637541f0;
    //printf("Length:[%d, %i]\n", len, len2);
	//_printf("%");
	//_printf("SS");
	//write(1, "%\n", 2);
	

	//len = _printf("p %% %% %% %s %c\n", str, 'a');
	//len2 = printf("l %% %% %% %s %c\n", str, 'a');

	printf("Length:[%d, %i]\n", len, len2);
	fflush(stdout);
	//if (len != len2)
	//{
	//	printf("Lengths differ.\n");
	//	fflush(stdout);
	//	return (1);
	//}
	return (0);
}



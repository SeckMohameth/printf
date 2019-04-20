#include <limits.h>
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

    //len = _printf("Let's try to printf a simple sentence.\n");
    //len2 = printf("Let's try to printf a simple sentence.\n");
    //ui = (unsigned int)INT_MAX + 1024;
    //addr = (void *)0x7ffe637541f0;
    //printf("Length:[%d, %i]\n", len, len2);
	//_printf("%");
	//_printf("SS");

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');

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



#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
* struct pairing - struct for pairing format to fuctions
*
* @a: the operator
* @ptr: the fuction associated
*/
struct pairing
{
        char a;
        void (*ptr)();
};

int _printf(const char *format, ...);

#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct handl - handler calss to print
 * @id: the type of arg to print
 * fn: function to run the id 
 */

typedef struct handl
{
	char id;
	int(*fn)(va_list);

}handler;

int mod(va_list list);
int _putchar(va_list list);
int _printf(const char *format, ...);
int puts_str(va_list list);
int printNum(va_list list);


#endif

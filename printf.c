#include "main.h"
#include "stdio.h"
int _printf(const char *format, ...)
{
	int c_print = 0;

	va_list args;
	if (format == NULL)
	{
		return (-5);
	}
	va_start(args, format);	
	while (*format) 
	{
		if (*format != '%')
	{	
		_putchar(*format);
		format++;
		c_print++;
	} else
		{	format++;
			if (*format == '%')
			{
				_putchar(*format);
			}else if(*format == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c);
				format++;
				c_print++;
			}
			else if(*format == 's')
			{
				char *str = va_arg(args, char*);
				puts_str(str);
				format++;
				c_print++;
			}
			else if(*format == 'i')
			{
				int integer = va_arg(args, int);
				printNum(integer);
				format++;
				c_print++;
			}
			else if(*format == 'd')
			{
				int decimal = va_arg(args, int);
				printNum(decimal);
				format++;
				c_print++;
			}
			else if (*format =='b')
			{
				int binar = va_arg(args,int);
				BinaryRecursive(binar);
				format++;
				c_print++;
			}
		}
va_end(args);

return(c_print);
	}
return c_print;
}

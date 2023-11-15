#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @list: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(va_list list)
{
	char c = va_arg(list, int);
		(write(1, &c, 1));
return (1);
}

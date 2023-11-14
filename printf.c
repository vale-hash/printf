#include "main.h"

int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list list;
	handler hand[] = {
		{'c', _putchar},
		{'s', puts_str},
		{'i', printNum},
		{'d', printNum},
		{'%', mod},
		{'\0', NULL}
	};

	va_start(list, format);
	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			i++;
			for (; format[i] != '\0'; i++)
			{
				for (j = 0; hand[j].id != '\0'; j++)
					if (format[i] == hand[j].id)
					{
						count += hand[j].fn(list);
						break;
					}
				if (hand[j].id)
					break;
			}
			if (format[i] == '\0')
				return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}

	va_end(list);
	return (count);
}


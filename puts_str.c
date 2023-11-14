#include "main.h"
/**
  * _puts - function to display a string
  *@str: - the string to be printed
  * Return: 0
  */
int puts_str(va_list list)
{	int len, count;
	count = 0;
	char *STRing = va_arg(list, char *);

	if(STRing == NULL)
		STRing = "(null)";
	else
	{
		len =_strlen(STRing);
		(write(1, STRing, len));
		count++;
	}
return (count);
}

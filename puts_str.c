#include "main.h"
/**
  * _puts - function to display a string
  *@str: - the string to be printed
  * Return: 0
  */
void puts_str(char *str)
{	int len;
	len =_strlen(str);
    (write(1, str, len));
}

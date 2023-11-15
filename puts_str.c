 #include "main.h"

/**
  * _puts - function to display a string
  *@str: - the string to be printed
  * Return: 0
  */

int puts_str(va_list list)
{
        int i, count;
 
        char *str_buf;
	count = 0;
        str_buf = va_arg(list, char *);

        if (str_buf == NULL)
                str_buf = "(null)";

        for (i = 0; str_buf[i]; i++)
        {
                write(1, &str_buf[i], 1);
                count += 1;
        }

        return (count);
}





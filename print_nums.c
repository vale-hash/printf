#include "main.h"
/**
 *printNum - function to pRINT numNUMBER TO stdout
 *
 */
int printNum(va_list list) 
{
	int num, expo = 1, len = 0;
	unsigned int n;
	char pr;

	num= va_arg(list, int);

	if (num< 0)
	{
		pr = '-';
		len = len + write(1, &pr, 1);
		n = num* -1;
	}
	else
		n = num;
	while (n / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		pr = n / expo + '0';
		len = len + write(1, &pr, 1);
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}

#include "main.h"
/**
 *BinaryRex - function to return binary
 * @list: numbers to return
 * Return : binsty digit.
 */

int BinaryRec(va_list list) 
{
    	int num;
	num = va_arg(list, int);
	char binaryDigit;
    	if (num > 0)
	{
        	BinaryRec(list);
        	binaryDigit = '0' + (num % 2);
        	write(1, &binaryDigit, 1);
	}
	else if (num == 0)
	{
		binaryDigit = '0';
		write(1, &binaryDigit,1);
	}

return (1);
}


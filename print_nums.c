#include <unistd.h>
#include "main.h"
/**
 *printNum - function to pRINT A NUMBER TO stdout
 *
 */
void printNum(int num) 
{
	char buffer[20];
	int len =0;
	do {
        	buffer[len++] = '0' + num % 10;
        	num /= 10;
    } while (num > 0);

    /*Write the string to standard output in reverse order*/
    while (len > 0) {
        len--;
        write(1, &buffer[len], 1);
    }
}


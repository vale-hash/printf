#include "main.h"
/**
 * _strlen - function that print the lenghtnof a string
 * @s: the string inputed
 * Return : returns the lenght.
 */


int _strlen(char* s)
{
	int i;
	for (i = 0; s[i] !='\0'; i++)
	{/*m just incrementing i*/}
return (i);
}

int test(){
	int a;
	a = _strlen("woop");

return(a);
}

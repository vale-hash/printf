#include "main.h"
/**
 * BinaryRecursive -function to convert an integer to binary using recursion
 * @num: number to be converted
 */
void BinaryRecursive(int num)
{
    if (num > 0) {
        BinaryRecursive(num / 2);
        _printf("%d", num % 2);
    }
}

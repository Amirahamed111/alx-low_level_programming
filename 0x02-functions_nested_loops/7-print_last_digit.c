#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number to be checked
 * Description: the last digit of a number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
        int l = n % 10;

        if (l < 0)
                l = l * -1;
        _putchar(l + '0');
        return (l);
}

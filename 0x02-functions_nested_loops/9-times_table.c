#include "main.h"

/**
 * times_table - Entry point
 * Description:  the 9 times table, starting with 0
 * Return: no return value
 */
void times_table(void)
{
        int a = 0;
        int b = 0;

        while (a <= 9)
        {
                while (b <= 9)
                {
                        int c = a * b;

                        if (b == 0)
                        {
                                _putchar(c + '0');
                                _putchar(',');
                        }
                        else
                        {
                                int num1 = (c / 10) % 10;
                                int num2 = c % 10;

                                _putchar(' ');
                                if (num1 > 0)
                                        _putchar(num1 + '0');
                                else
                                        _putchar(' ');
                                _putchar(num2 + '0');
                                if (b != 9)
                                        _putchar(',');
                        }
                        b++;
                }
                _putchar('\n');
                a++;
                b = 0;
        }
}

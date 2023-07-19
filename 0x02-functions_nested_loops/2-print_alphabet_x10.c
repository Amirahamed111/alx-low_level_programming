#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description:"prints 10 times the alphabet"
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
        int p = 0;

        while (p < 10)
        {
                char alp = 'a';

                while (alp <= 'z')
                {
                        _putchar(alp);
                        alp++;
                }
                _putchar('\n');
                p++;
        }
}

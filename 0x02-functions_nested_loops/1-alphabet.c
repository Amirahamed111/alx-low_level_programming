#include "main.h"

/**
 * print_alphabet - writes the alphabets
 *
 * Return: On success 0.
 */

void print_alphabet(void)
{
        char alp = 'a';

        while (alp <= 'z')
        {
                _putchar(alp);
                alp++;
        }
        _putchar('\n');
}

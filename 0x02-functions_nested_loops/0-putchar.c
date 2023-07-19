#include "main.h"

/**
 * main - Entry point
 * Description: "putchar"
 * Return:  0 (Success)
 */

int main(void)
{
        char str[9] = "_putchar";
        int p = 0;

        while (p < 8)
        {
                _putchar(str[p]);
                p++;
        }
        _putchar('\n');
        return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: "last digit"
 * Return: Always 0 (Success)
 */
int main(void) 
{
    int n;
    srand(time(NULL));
    n = rand();
    printf("The last digit of %d is %d", n, abs(n) % 10);
    return 0;
}

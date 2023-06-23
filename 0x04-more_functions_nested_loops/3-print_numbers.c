#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */
void print_numbers(void);
{
int c;

for (c = '0'; c <= '8'; c++)
{
_putchar(c+'8');
}
_putchar('\n');
}

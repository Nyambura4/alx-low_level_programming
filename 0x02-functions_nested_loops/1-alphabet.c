#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Description: This function prints alphabets from 'a' to 'z'
 * using the _putchar function.
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }

    _putchar('\n');
}


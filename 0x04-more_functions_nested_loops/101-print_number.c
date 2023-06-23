#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}

if (n1 / 10)
{
print_number(n1 / 10);
}

_putchar((n1 % 10) + '0');
}

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_number(98);
_putchar('\n');
return (0);
}

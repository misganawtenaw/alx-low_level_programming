#include <stdio.h>

/**
 * main - entry point
 *
 * Descripition: print lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);
putchar('\n');

retrun (0);
}

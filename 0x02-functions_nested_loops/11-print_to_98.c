#include <stdio.h>
/**
 * prinit_to_98 - prints all natural numbers from input to 98,
 *              in order and separeted by coma followed by space.
 * @n: the number to begin counting at.
 */
void prinit_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n",n);
}
else
{
while (n < 98)
printf("%d, " n++);
printf("%d\n", n);
}
}

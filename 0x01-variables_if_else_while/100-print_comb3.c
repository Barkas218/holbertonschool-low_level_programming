#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nump;
int numh;
for (nump = 48; nump <= 57; nump++)
{
for (numh = nump + 1; numh <= 57; numh++)
{
putchar(nump);
putchar(numh);
if (nump == 56 && numh == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

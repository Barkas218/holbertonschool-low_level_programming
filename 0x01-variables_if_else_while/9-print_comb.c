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
int sdigit;
for (sdigit = 48; sdigit <= 57; sdigit++)
{
putchar(sdigit);
if (sdigit == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

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
char letter;
char letterBig;
letter = 'a';
letterBig = 'A';
while (letter <=  'z')
{
putchar(letter);
letter++;
}
while (letterBig  <= 'Z')
{
putchar(letterBig);
 letterBig++;
}
putchar('\n');
return (0);
}

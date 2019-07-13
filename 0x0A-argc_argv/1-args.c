#include <stdio.h>

/**
 * main - prints the name of the executable file with argc, argv
 * @argc: number of arguments of the command line
 * @argv: array of strings coitaining the arguments.
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
return (0);
}

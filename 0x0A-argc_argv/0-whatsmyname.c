#include <stdio.h>

/**
 * main - prints the name of the executable file with argc, argv
 * @argc: number of arguments of the command line
 * @argv: array of strings coitaining the arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
return (0);
}

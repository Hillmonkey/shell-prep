#include <stdio.h>

/**
 * main - print out all command line arguments without use of ac
 * @ac: number of command line arguments
 * @av: pointer to a list of strings (command line arguments)
 * Returns: zero on success
 **/

int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		puts(av[i]);
		i++;
	}
	return (0);
}

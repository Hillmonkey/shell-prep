#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simple-debug.h"

/**
 * main "cl2av" accepts single command line arg
 * NOTE: pass in one long string contained within double quotes!!!
 * @argc: int representing # of args
 * @argv: array of strings
 * Return: 1 on success
 **/
int main (int argc, char *av[])
{
	char **new;
	char *token;
	char delim[2] = " "; /* why 2? */
	unsigned int i = 0;

	/* printf("argc --> %d", argc); */
	if (argc != 2)
	{
		return (-1);
	}
	new = malloc(sizeof(int *));
	if (new == NULL)
		return (-1);
	token = strtok(av[1], delim);
	new[i] = token;
	while (token != NULL)
	{
		i++;
		new[i] = malloc(sizeof(char*));
		if (new[i] == NULL)
			return (-1); /* see 3-alloc_grid.c for proper freeing of mallocs */
		token = strtok(NULL, delim);
		new[i] = token;
	}
	return (0);
}

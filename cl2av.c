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
	char *token;
	char delim[2] = " "; /* why 2? */
	unsigned int i = 0;

	if (argc != 2)
		printf ("Wrong number of arguments!\n");
		printf ("Please pass one string in quotes!\n");
		return (-1);
	/*
	&str[i] = av[1];
	*/

	token = strtok(av[1], delim);
	while (token != NULL)
	{
		new[i] = token;
		i++;
		token = strtok(av[1], delim);
	}
	return (0);
}

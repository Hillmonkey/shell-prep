#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints prompt and echoes back typed input
 * note - this implements Read Line, see:
 * https://intranet.hbtn.io/concepts/64 
 *
 **/

int main(void)
{
	char *buffer;
	size_t bufsize = 32;
	/* size_t numchar; */

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer.");;
		exit(1);
	}
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%s", buffer);

	return (0);
}

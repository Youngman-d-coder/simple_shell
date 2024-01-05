#include "main.h"

/**
 * read_line - This function helps to get user data
 *
 * Return: line gotten from user
 */
char *read_line(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t nchars_read;

	nchars_read = getline(&line, &size, stdin);
	if (nchars_read == -1)
	{
		if (feof(stdin))
		{
			return (NULL);
		}
		else
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
	}

	if (line[nchars_read - 1] == '\n')
		line[nchars_read - 1] = '\0';

	if (line[0] == '\n')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

#include "main.h"

/**
 * parse_argument - parses in argument as command
 *
 * @line: pointer to the arguments passed in
 *
 * Return: argument as string
 */
char **parse_arguments(char *line)
{
	const char *delim = " \t\n";
	char **arguments = NULL;
	char *token;
	int count_arg = 0;

	token = strtok(line, delim);
	while (token != NULL)
	{
		arguments = realloc(arguments, sizeof(char *) * (count_arg + 1));
		if (arguments == NULL)
		{
			perror("realloc");
			exit(EXIT_FAILURE);
		}
		arguments[count_arg] = token;
		count_arg++;
		token = strtok(NULL, delim);
	}
	arguments = realloc(arguments, sizeof(char *) * (count_arg + 1));

	if (arguments == NULL)
	{
		perror("realloc");
		exit(EXIT_FAILURE);
	}
	arguments[count_arg] = NULL;

	return (arguments);
}

#include "main.h"

/**
 * execute_command - executes the given command
 *
 * @command: command to be executed
 *
 * Return: 1 on success
 */
int execute_command(char *command)
{
	char **args, *full_path = command;
	pid_t pid;
	int status;

	args = parse_arguments(command);
	if (args[0] == NULL)
	{
		free(args);
		return (1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		free(args);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(command, (char * const *)args, NULL) == -1)
		{
			perror(full_path);
			free(args);
			free(full_path);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
	if (status != 0)
		return (255);
	free(args);
	free(full_path);
	return (1);
}

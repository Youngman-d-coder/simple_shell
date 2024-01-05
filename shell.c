#include "main.h"

/**
 * main - entry point for shell
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char *line, *cmd, **avs, **sort_avs;
	int status;
	int interactive;

	interactive = isatty(STDIN_FILENO);

	do {
		if (interactive && line != NULL)
			display_prompt();
		line = read_line();
		if (line == NULL)
			break;

		cmd = _strcpy(malloc(BUFFER_SIZE), line);
		avs = parse_arguments(cmd);
		if (avs[0] == NULL)
		{
			free(cmd);
			free(avs);
			continue;
		}
		sort_avs = sort_args(avs);
		status = execute_command(line);
		free(cmd);
		free(avs);
		free(sort_avs);
	} while (status);

	return (EXIT_SUCCESS);
}

#include "main.h"

char **sort_args(char **args)
{
	char **sorted_args = malloc(sizeof(char *) * MAX_ARGS);
	int i;

	if (sorted_args == NULL)
		return (NULL);

	for (i = 0; args[i] != NULL; i++)
		sorted_args[i] = args[i];

	qsort(sorted_args, i, sizeof(char *), _strcmp);

	return (sorted_args);
}

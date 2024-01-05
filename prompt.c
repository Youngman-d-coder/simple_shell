#include "main.h"

/**
 * display_prompt - displays the prompt on the screen
 */
void display_prompt(void)
{
	char *prompt = "$ ";

	write(STDOUT_FILENO, prompt, _strlen(prompt));
}

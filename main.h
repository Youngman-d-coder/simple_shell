#ifndef MAIN_H
#define MAIN_H

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

#define O_WRONLY 1
#define BUFFER_SIZE 1024
#define MAX_ARGS 10

/* PROTOTYPES */
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int _strlen(const char *str);
void display_prompt(void);
char *read_line(void);
char **parse_arguments(char *line);
int execute_command(char *command);
int _strcmp(const void *a, const void *b);
char **sort_args(char **args);
int _putchar(char c);
void write_cmd(char *path, char **avs);
void write_str(const char *str);
int open(const char *path, int flags);
char *_pathgenerator(int argc, ...);



#endif /* MAIN_H */

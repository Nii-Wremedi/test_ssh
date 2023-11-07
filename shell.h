#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>
#define MAX_C 10
/**
 * struct denum - structure that contains vars
 * @cnt: lines cnt
 */
typedef struct denum
{
	int cnt;
} denum;
void _prompter(char **argv, char **envp, bool flag);
int _stringcmp(char *st0, char *st1);
char *_strconcat(char *char_ptr1, char *char_ptr2);
char *path_handler(char **rgv, char *cmad);
char *stringcpy(char *char_ptr1, char *char_ptr2);
int stringlen(char *s);
void exit_handler(char *cmad);
void runcommand(char **rgv, char **argv, char **envp);
char *spacetrim(char *cmad);
char *_strncpy(char *char_ptr1, char *char_ptr2, int n);
char *get_path(char *cmad);
char *_getenv(char *name);
char **tokenize_env(char *path);
int _strncmp(char *str1, char *str2, int a);
extern char **environ;
/*void geterror(int cnt, char **argv, char *cmad);*/
void error_handler(denum *n, char **argv, char *cmad);
/*void search_path(char **rgv, char *cmad, char **envp);*/
#endif


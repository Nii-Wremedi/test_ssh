#include "shell.h"
/**
 * spacetrim - remove space
 * @cmd: comand
 * Return: cmmand
 */
char *spacetrim(char *cmd)
{
	char *copycmd;
	int a = 0, leng;

	while (cmd[a] == ' ')
		a++;
	leng = stringlen(cmd) - a + 1;
	copycmd = malloc(leng + 1);
	if (!copycmd)
	{
		perror("Allocation Failed\n");
		return (NULL);
	}
	_strncpy(copycmd, cmd + a, leng);
	copycmd[leng] = '\0';
	stringcpy(cmd, copycmd);
	free(copycmd);
	return (cmd);
}

#include "shell.h"
/**
 * path_handler - handle the path function
 * @rgv: rgv argument
 * @cmad: command set by the user
 * Return: command for exec
 */
char *path_handler(char **rgv, char *cmad)
{
	char *path;

	path = malloc(stringlen("/bin/") + stringlen(cmad) + 1);
	if (!path)
	{
		return (NULL);
	}
	stringcpy(path, "/bin/");

	if (cmad[0] != '/' && cmad[0] != '.')
	{
		rgv[0] = _strconcat(path, cmad);
		return (rgv[0]);
	}
	free(path);
	return (cmad);
}


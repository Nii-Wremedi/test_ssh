#include "shell.h"
/**
 * runcommand - a function that run command
 * @rgv: rgv argument
 * @arv: argv argument
 * @envp: envp argument
 */
void runcommand(char **rgv, char **argv, char **envp)
{
	pid_t mychild;
	int stat;
	/*denum *c = malloc(sizeof(struct denum));*/

	mychild = fork();

	if (mychild == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}
	if (mychild == 0)
	{

		if (execve(rgv[0], rgv, envp) == (-1))
		{
			write(STDOUT_FILENO, argv[0], stringlen(argv[0]));
			write(STDOUT_FILENO, ": No such file or directory",
			stringlen(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
			/*geterror(c -> cnt, argv, cmd);*/
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&stat);
	}
}


#include "shell.h"
/**
 * stringlen - length of a string
 * @s: string
 * Return: length
 */
int stringlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}


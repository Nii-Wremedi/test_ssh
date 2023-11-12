#include "shell.h"
/**
 * _strncpy - copy n char
 * @char_ptr1: string argument
 * @char_ptr2: string argument for src
 * @n: integer argument
 * Return: dest
 */
char *_strncpy(char *char_ptr1, char *char_ptr2, int n)
{
	int a;

	for (a = 0; a < n && char_ptr2[a] != '\0'; a++)
	{
		char_ptr1[a] = char_ptr2[a];
	}
	for (; a < n; a++)
	{
		char_ptr1[a] = '\0';
	}
	return (char_ptr1);
}


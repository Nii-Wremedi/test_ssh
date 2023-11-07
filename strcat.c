#include "shell.h"
/**
 * _strconcat - This function appends the src string to the dest string
 * @char_ptr1: string agument
 * @char_ptr2: string argument
 * Return: String
 */
char *_strconcat(char *char_ptr1, char *char_ptr2)
{
	int leng = 0, lend = 0, i;

	while (char_ptr2[leng] != '\0')
	{
		leng++;
	}
	while (char_ptr1[lend] != '\0')
	{
		lend++;
	}
	for (i = 0; i < leng; i++)
	{
		char_ptr1[lend + i] = char_ptr2[i];
	}
	char_ptr1[lend + leng] = '\0';
	return (char_ptr1);
}


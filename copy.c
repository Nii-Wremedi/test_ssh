#include "shell.h"
/**
 * stringcpy - copy a string
 * @char_ptr1: char_ptr1 string argc
 * @char_ptr2: source argc
 * Return: string value
 */
char *stringcpy(char *char_ptr1, char *char_ptr2)
{
	int a, leng= 0;

	while (char_ptr2[leng] != '\0')
	{
		leng++;
	}
	for (a = 0; a < leng; a++)
	{
		char_ptr1[a] = char_ptr2[a];
	}
	char_ptr1[a] = '\0';
	return (char_ptr2);
}


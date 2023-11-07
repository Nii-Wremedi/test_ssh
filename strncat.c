#include "shell.h"
/**
 * _strncat - Concantenates two strings where n number
 * of bytes are copied from source.
 * @char_ptr1: Pointer to destination string.
 * @char_ptr2: Pointer to source string.
 * @n: n bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *char_ptr1, const char *char_ptr2, size_t n)
{
	size_t dest_len = stringlen(char_ptr1);
	size_t a;

	for (a = 0; a < n && char_ptr2[a] != '\0'; a++)
		char_ptr1[dest_len + a] = char_ptr2[a];
	char_ptr1[dest_len + a] = '\0';

	return (char_ptr1);
}


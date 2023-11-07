#include "shell.h"
/**
 * intlen - a func that ... later
 * @n: a parameter
 * Return: the lenth.
 */
int intlen(int n)
{
	unsigned int number;
	int leng = 1;

	if (n < 0)
	{
		leng++;
		number = n * -1;
	}
	else
	{
		number = n;
	}
	while (number > 9)
	{
		leng++;
		number = number / 10;
	}

	return (leng);
}
/**
 * _itoa - a func that .. later
 * @num: a passing param.
 * Return: buff if not NULL.
 */
char *_itoa(int num)
{
	char *buff;
	size_t  a;
	int leng = intlen(num);

	buff = malloc(leng + 1);
	if (!buff)
	{
		return (NULL);
	}
	buff[leng] = '\0';
	if (num < 0)
	{
		a = num * -1;
		*buff = '-';
	}
	else
		a = num;
	leng--;

	do {
		*(buff + leng) = (a % 10) + '0';
		a /= 10;
		leng--;
	} while (a > 0);
		return (buff);
}
/**
 * geterror - a function that run command
 * @a: argument
 * @argv: argv argument
 * @cmad: the command.
 * Return: void.
 */
void error_handler(denum *n, char **argv, char *cmad)
{
	int leng;
	char *errmsg, *cnt_str;

	cnt_str = _itoa(n->cnt);
	leng = stringlen(argv[0]) + stringlen(cmad) + stringlen(cnt_str) + 17;
	errmsg = malloc(leng);
	if (!errmsg)
	{
		return;
	}
	stringcpy(errmsg, argv[0]);
	_strconcat(errmsg, ": ");
	_strconcat(errmsg, cnt_str);
	_strconcat(errmsg, ": ");
	_strconcat(errmsg, cmad);
	_strconcat(errmsg, ": not found\n");
	_strconcat(errmsg, "\0");
	write(STDOUT_FILENO, errmsg, leng);
	free(errmsg);
}


#include "shell.h"
/**
 * str_cmp - Compares two strings (str1 and str2) up to
 * a specified length (length).
 * @str1: input string
 * @str2: input string to compare against.
 * @length: Length to compare up to.
 * Return: 1 if strings are equal, -1 if they are not.
 */
int str_cmp(char *str1, char *str2, unsigned int length)
{
	unsigned int i;

	if (str_len(str2) < length)
		return (-1);

	i = 0;
	while (i < length)
	{
		if (str1[i] != str2[i])
			return (-1);
		i++;
	}
	return (1); /
}

/**
 * str_cpy - Copies the string src to string dest
 * @dest: String destination.
 * @src: String source.
 * Return: The pointer to dest.
 */
char *str_cpy(char *dest, char *src)
{
	int i;
	int j = str_len(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * str_len - Returns the length of the input string s.
 * @s: String to be evaluated.
 * Return: Length of the string.
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

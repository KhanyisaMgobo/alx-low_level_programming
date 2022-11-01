#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int k, m;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + k) == *(accept + m))
				return (s + k);
		}
	}
	return ('\0');
}

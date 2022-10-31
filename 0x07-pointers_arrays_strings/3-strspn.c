#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, m, bool;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		bool = 1;
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + k) == *(accept + m))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (k);
}

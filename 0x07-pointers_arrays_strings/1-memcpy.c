#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes we copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		*(dest + k) = *(src + k);
	return (dest);
}

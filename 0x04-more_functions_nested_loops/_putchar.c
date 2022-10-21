#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c tp stdout
 * @c: the character to print
 * Return: Omn success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

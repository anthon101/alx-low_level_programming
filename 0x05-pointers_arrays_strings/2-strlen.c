#include "main.h"
/**
 * _strlen - return the length of a string
 * @s:the string to get the lenght
 * return:the length of @str
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

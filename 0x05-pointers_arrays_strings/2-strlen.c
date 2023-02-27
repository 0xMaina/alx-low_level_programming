#include "main.h"
/**
* _strlen - function that returns the length of a string
*
* @s: String to be checked
*
* Return: always 0
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

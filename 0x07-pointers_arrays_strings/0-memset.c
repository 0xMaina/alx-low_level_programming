#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
0-main.c int i = 0;

0-main.c for (; n > 0; i++)
0-main.c {
0-main.c 0-main.c s[i] = b;
0-main.c 0-main.c n--;
0-main.c }
0-main.c return (s);
}

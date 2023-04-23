#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string segment
 * @accept: bytes returned
 * Return: number of bytes in @s from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					n++;
			}
		}
		else
			return (n);
	}
	return (n);
}

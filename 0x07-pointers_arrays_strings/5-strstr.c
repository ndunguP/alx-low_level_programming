#include "main.h"

/**
*_strstr - This function locates a substring
* @haystack: The string to search through
* @needle: The substring to search for
* Return: A pointer to the beginning of the located string; Otherwise, NULL
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;
while (haystack[i])
{
	while (needle[j] && (haystack[i] == needle[0]))
	{
		if (haystack[i + j] == needle[j])
			j++;
		else
			break;
	}
	if (needle[j])
	{
		i++;
		j = 0;
	}
	else
		return (haystack + i);
}
return (0);
}

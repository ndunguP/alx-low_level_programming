#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_djb2 - function that implements the djb2 algorithm
 * @str: pointer
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);

}

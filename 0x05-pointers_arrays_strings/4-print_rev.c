#include "main.h"
#include <stdio.h>
/**
*print_rev - This function prints a string in reverse
* @s: The string to print in reverse
*/
void print_rev(char *s)

{

int i;

char ch;

for (i = 0; s[i] != 0; i++)

for (i = i - 1; i >= 0; i--)

{

ch = s[i];

putchar(ch);

}

putchar('\n');
}

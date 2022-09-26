#ifndef MAIN_H
#define MAIN_H
/**
 * file: main.h
 * Auth: peter ndungu
 * Desc: 0x07. C - Even more pointers, arrays and strings containg prototypes
 */

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
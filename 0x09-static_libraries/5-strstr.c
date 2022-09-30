#include "main.h"
#include <string.h>
/**
 * _strstr - a function that finds the first occerence of thr substring needle
 * in the string haystack
 * @haystack: input string
 * @needle: input substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substing is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1:first string
 * @s2:second string
 * @n:number of bytes to take from s2
 * If n is greater or equal to the length of s2
 *  then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * Return: returned pointer shall point to
 * a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *s;

	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
		l2++;
	if (n > l2)
		n = l2;
	s = malloc((l1 + n + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);

	l1 = 0;
	while (s1[l1] != '\0')
	{
		s[l1] = s1[l1];
		l1++;
	}
	l2 = l1;
	while (l2 < n + l1)
	{
		s[l2] = s2[l2 - l1];
		l2++;
	}
	s[l2] = '\0';
	return (s);
}

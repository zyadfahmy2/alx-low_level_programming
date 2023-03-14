#include "main.h"
#include <stdlib.h>
/**
 * str_concat - The returned pointer should point to a newly allocated space
 *  in memory which contains the contents of s1,
 *  followed by the contents of s2, and null terminated
 *  if NULL is passed, treat it as an empty string
 *  @s1:first string
 *  @s2:second string
 *
 *  Return: pointer to newly allocated space or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char *s;

	i = 0;
	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return NULL;
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i - l1 < l2)
	{
		s[i] = s2[i - l1];
		i++;
	}
	s[i] = '\0';
	return (s);
}

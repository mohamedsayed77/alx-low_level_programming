#include "main.h"

/**
 * move_past_star - iterates past asterisk
 * @s2 : the second string
 * Return: the pointer past star
*/


char *move_past_star(char *s2)
{

	if (*s2 == '*')
		return (move_past_star(s2 + 1));

	else
		return (s2);
}


/**
 * inception - makes magic a reality
 * @s1 : first string
 * @s2 : second string
 * Return: 1 if indentical, 0 if false
*/

int inception(char *s1, char *s2)
{

	int ret = 0;

	if (*s1 == 0)
		return (0);

	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);

	ret += inception(s1 + 1, s2);
	return (ret);
}


/**
 * wildcmp -  cpmpares two strings lexicographically
 * @s1 : first string
 * @s2 : second string
 * Return: 1 if indentical, 0 if falase
*/

int wildcmp(char *s1, char *s2)
{

	int ret = 0;

	if (!*s1 && *s2 == '*'
	&& !*move_past_star(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);

		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));

	}

	if (!*s1 || !s2)
		return (0);

	if (*s2 == '*')
	{

		s2 = move_past_star(s2);

		if (!*s2)
			return (1);

		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);

		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}

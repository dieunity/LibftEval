/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 23:05:07 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/14 23:05:27 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcat() and strncat() functions append a copy of the null-terminated
** string s2 to the end of the null-terminated string s1, then add a terminating
** `\0'.  The string s1 must have sufficient space to hold the result.
** The strncat() function appends not more than n characters from s2, and
** then adds a terminating `\0'. The source and destination strings
** should not overlap, as the behavior is undefined.
** RETURN VALUE: the pointer s1.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	return (s1);
}

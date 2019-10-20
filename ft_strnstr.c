/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:46:07 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/15 04:54:54 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched. Characters that appear after a `\0' character are not searched.
** Since the strnstr() function is a FreeBSD specific API, it should only be
** used when portability is not a concern.
*/

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*need)
		return ((char*)hay);
	while (hay[i] && ft_strlen(need) <= len--)
	{
		j = 0;
		while (hay[i + j] == need[j])
		{
			if (!need[j + 1])
				return (&((char*)hay)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

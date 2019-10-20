/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:46:07 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/20 00:50:27 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself) obtained by
** spliting s using the character c as a delimiter. If the allocation fails
** the function returns NULL. Example: ft_strsplit("*hello*fellow***students*",
** ’*’) returns the array ["hello", "fellow", "students"].
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**new;
	size_t	flag;
	size_t	index;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(new = (char**)ft_memalloc(sizeof(char*) * (ft_count(s, c) + 1))))
		return (NULL);
	flag = 0;
	i = -1;
	index = 0;
	start = 0;
	while (s[++i])
	{
		if (s[i] == c && flag)
			new[index++] = ft_strsub(s, start, i - start);
		if (!flag && s[i] != c)
			start = i;
		flag = (s[i] == c) ? 0 : 1;
	}
	if (flag)
		new[index] = ft_strsub(s, start, i - start);
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 20:04:56 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/16 02:51:57 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies n bytes from memory area src to memory area dst.
** if dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use memmove instead.
** if (!dst && !src)
** return (NULL);
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n)
	{
		--n;
		((unsigned char*)dst)[n] = ((unsigned char*)src)[n];
	}
	return (dst);
}

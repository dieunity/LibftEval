/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 20:34:05 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/16 01:56:02 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3) and returns a "fresh" memory area.
** The memory allocated is initialized to 0).
** If allocation fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res == 0)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:46:07 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/16 01:13:05 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*new;
	char	*str;

	str = "0123456789";
	len = n < 0 ? 1 : 0;
	nb = n < 0 ? -(long)n : n;
	len = ft_intlen(nb, len);
	len = (n == 0) ? 1 : len;
	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
		new[0] = '0';
	new[len] = '\0';
	nb = n < 0 ? -(long)n : n;
	while (nb > 0)
	{
		new[--len] = str[nb % 10];
		nb /= 10;
	}
	if (n < 0)
		new[0] = '-';
	return (new);
}

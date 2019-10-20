/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 00:35:44 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/08 00:39:19 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new at the beginning of the list.
** Param: address of a pointer to first link of list, and
** Param 2: link to add at the begining of the list.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	new->next = *alst;
	*alst = new;
}

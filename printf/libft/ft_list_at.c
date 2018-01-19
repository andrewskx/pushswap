/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:42:52 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:42:53 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_at(t_list *begin_list, size_t nbr)
{
	size_t i;

	i = 1;
	while (i < nbr && begin_list->next != 0)
	{
		i++;
		begin_list = begin_list->next;
	}
	if (i == nbr)
		return (begin_list);
	else
		return (0);
}

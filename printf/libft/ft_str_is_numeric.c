/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:46:33 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:46:34 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	validare(char c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}

int			ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (validare(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

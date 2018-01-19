/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:46:25 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:46:26 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

static int		validare(char c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	else
		return (0);
}

int				ft_str_is_alpha(char *str)
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

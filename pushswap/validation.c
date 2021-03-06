/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:33:40 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 18:24:30 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static	int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static	int	is_tabulator(char c)
{
	return (c == '\t' || c == ' ');
}

int			validation(int arg, char **str, int *flag)
{
	int i;
	int j;

	if (arg == 1)
		return (0);
	check_flags(str, flag, &i);
	while (i < arg)
	{
		j = 0;
		while (str[i][j])
		{
			if (!is_digit(str[i][j]))
				if (!is_tabulator(str[i][j]) &&
						!(str[i][j] == '-' && is_digit(str[i][j + 1])))
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

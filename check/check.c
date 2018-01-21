/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:22:08 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 17:22:41 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static	void	clean(char *buff)
{
	buff[0] = '\0';
	buff[1] = '\0';
	buff[2] = '\0';
	buff[3] = '\0';
}

static	void	check_len(char *buff)
{
	if (buff[2] == '\n')
		buff[2] = '\0';
	else if (buff[3] == '\n')
		buff[3] = '\0';
}

int				check(t_stack *a, t_stack *b)
{
	char *buff;

	buff = ft_strnew(4);
	while (read(0, buff, 3) == 3)
	{
		check_len(buff);
		if (!ft_strcmp("sa", buff))
			swap_a_b(a);
		else if (!ft_strcmp("pa", buff))
			push_a_b(b, a);
		else if (!ft_strcmp("ra", buff))
			reverse_a_b(a);
		else if (!ft_strcmp("pb", buff))
			push_a_b(a, b);
		else if (!ft_strcmp("rra", buff))
			rotate_a_b(a);
		clean(buff);
	}
	free(buff);
	return (is_sorted(a) && is_empty(b));
}

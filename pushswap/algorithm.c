/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:32:23 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 18:26:02 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_algorithm(t_stack *a, t_stack *b, int flag)
{
	while (!is_sorted(a))
	{
		if (a->min_elem_index > a->index / 2)
		{
			rotate_a_b(a);
			write(1, "rra\n", 4);
		}
		else if (a->min_elem_index <= a->index / 2)
		{
			reverse_a_b(a);
			write(1, "ra\n", 3);
		}
		else if (a->min_elem_index == a->index - 1)
		{
			swap_a_b(a);
			write(1, "sa\n", 3);
		}
		if (!is_sorted(a) && a->min_elem_index == a->index)
		{
			push_a_b(b, a);
			write(1, "pa\n", 3);
		}
		find_min(a);
		if (flag)
			print_stack(a, b);
	}
	while (!is_empty(b))
	{
		write(1, "pb\n", 3);
		push_a_b(a, b);
		if (flag)
			print_stack(a, b);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_empty_full.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:49:40 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/19 19:41:20 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		is_full(t_stack *stack)
{
	return (stack->index == stack->size - 1);
}

int		is_empty(t_stack *stack)
{
	return (stack->index == -1);
}

int		is_sorted(t_stack *stack)
{
	int i;

	i = 0;
	while (i < stack->index - 1)
	{
		if (stack->arr[i] < stack->arr[i + 1])
		{
			find_min(stack);
			return (0);
		}
		i++;
	}
	find_min(stack);
	return (1);
}

void	find_min(t_stack *stack)
{
	int i;
	int min;

	if (!is_empty(stack))
	{
		i = 0;
		min = stack->arr[0];
		while (i < stack->index)
		{
			if (stack->arr[i] < min)
				stack->min_elem_index = i;
			i++;
		}
	}
}

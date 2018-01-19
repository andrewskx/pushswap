/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 19:00:35 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/19 19:53:35 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate_a_b(t_stack *stack)
{
	int aux;
	int i;

	if (!is_empty(stack) && stack->index > 0)
	{
		aux = stack->arr[stack->index];
		i = stack->index;
		while (i != 0)
		{
			stack->arr[i] = stack->arr[i - 1];
			i--;
		}
		stack->arr[0] = aux;
	}
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	rotate_a_b(stack_a);
	rotate_a_b(stack_b);
}

void	reverse_a_b(t_stack *stack)
{
	int aux;
	int i;

	if (!is_empty(stack) && stack->index > 0)
	{
		aux = stack->arr[0];
		i = 0;
		while (i < stack->index)
		{
			stack->arr[i] = stack->arr[i + 1];
			i++;
		}
		stack->arr[stack->index] = aux;
	}
}

void	reverse_both(t_stack *stack_a, t_stack *stack_b)
{
	reverse_a_b(stack_a);
	reverse_a_b(stack_b);
}

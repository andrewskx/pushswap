/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:12:41 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/19 19:40:22 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap_a_b(t_stack *stack)
{
	int a;
	int b;

	if (!(!stack->index || is_empty(stack)))
	{
		a = pop_a_b(stack);
		b = pop_a_b(stack);
		push(stack, a);
		push(stack, b);
	}
}

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	swap_a_b(stack_a);
	swap_a_b(stack_b);
}

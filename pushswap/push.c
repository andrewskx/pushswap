/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:34:29 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 17:35:26 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(t_stack *stack, int element)
{
	if (!is_full(stack))
	{
		stack->index++;
		stack->arr[stack->index] = element;
		find_min(stack);
	}
	else
	{
		write(1, "Error\nPushing to full stack\nExit(1)\n", 36);
		exit(1);
	}
}

void	push_a_b(t_stack *stack_a, t_stack *stack_b)
{
	if (!is_empty(stack_b) && !is_full(stack_a))
		push(stack_a, pop_a_b(stack_b));
}

int		pop_a_b(t_stack *stack)
{
	if (stack->index == -1)
	{
		write(1, "\nPop empty stack\nExit(1)\n", 25);
		exit(1);
	}
	stack->index--;
	find_min(stack);
	return (stack->arr[stack->index + 1]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:34:29 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/19 20:02:14 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(t_stack *stack, int element)
{
	if (!is_full(stack))
	{
		stack->index++;
		stack->arr[stack->index] = element;
		if (element <= stack->arr[stack->min_elem_index])
			stack->min_elem_index = stack->index;
	}
}

void	push_a_b(t_stack *stack_a, t_stack *stack_b)
{
	if (!is_empty(stack_b) && !is_full(stack_a))
		push(stack_a, pop_a_b(stack_b));
}

int	 pop_a_b(t_stack *stack)
{
	if (stack->index == -1)
	{
		write(1, "\nPop empty stack\nExit(1)\n", 25);
	   exit(1);
	}	   
	stack->index--;
	is_sorted(stack);
	return (stack->arr[stack->index + 1]);
}	

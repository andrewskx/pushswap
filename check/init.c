/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:21:23 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 17:23:30 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	int i;

	i = stack_a->size;
	while (i != -1)
	{
		if (stack_a->index < i && stack_b->index < i)
			ft_printf("\n");
		else if (stack_a->index >= i && stack_b->index < i)
			ft_printf("% -4i\n", stack_a->arr[i]);
		else if (stack_a->index < i && stack_b->index >= i)
			ft_printf("% 8i\n", stack_b->arr[i]);
		else if (stack_a->index >= i && stack_b->index >= i)
			ft_printf("% -4i% 4i\n", stack_a->arr[i], stack_b->arr[i]);
		i--;
	}
	ft_printf("____  ____\n  a     b\n");
}

void	init(t_stack *stack, int size)
{
	if (size <= 0)
	{
		ft_printf("Negative size\nExit(1)\n");
		exit(1);
	}
	stack->arr = (int*)malloc(sizeof(int) * size);
	stack->size = size;
	stack->index = -1;
	stack->min_elem_index = 0;
}

void	delete_mem(t_stack *a, t_stack *b)
{
	if (a->arr)
		free(a->arr);
	if (b->arr)
		free(b->arr);
}

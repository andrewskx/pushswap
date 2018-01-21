/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:33:18 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 18:25:33 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static	void	initialize(t_stack *a, t_stack *b, int flag, int arg)
{
	if (flag)
		arg -= 2;
	else
		arg -= 1;
	init(a, arg);
	init(b, arg);
}

void			check_flags(char **argv, int *flag, int *i)
{
	if (!ft_strcmp(argv[1], "-V"))
	{
		*flag = 1;
		*i = 2;
	}
	else
	{
		*flag = 0;
		*i = 1;
	}
}

int				main(int arg, char **argv)
{
	t_stack a;
	t_stack b;
	int		i;
	int		flag;

	if (!validation(arg, argv, &flag))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	initialize(&a, &b, flag, arg);
	if (flag)
		i = 2;
	else
		i = 1;
	while (i < arg)
	{
		push(&a, atoi(argv[i]));
		i++;
	}
	sort_algorithm(&a, &b, flag);
	if (flag)
		print_stack(&a, &b);
	delete_mem(&a, &b);
	return (0);
}

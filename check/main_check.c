/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:23:01 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/21 17:23:15 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int arg, char **argv)
{
	t_stack a;
	t_stack b;
	int		i;

	if (!validation(arg, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 1;
	init(&a, arg - 1);
	init(&b, arg - 1);
	while (i < arg)
	{
		push(&a, ft_atoi(argv[i]));
		i++;
	}
	if (check(&a, &b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	delete_mem(&a, &b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_invalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:27:08 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 18:27:40 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_invalid(t_tags *tags, t_format *format)
{
	if (tags->set_precision || tags->width_precision ||
		tags->width > 0)
	{
		if (tags->flags.left_justify)
		{
			ft_putchar(*get_pos(format));
			print_width(tags, format, " ");
		}
		else
		{
			print_width(tags, format, " ");
			ft_putchar(*get_pos(format));
		}
		format->position++;
		format->written++;
	}
}

void	print_sign(t_tags *tags, t_format *format, char *str)
{
	ft_putchar(str[0]);
	print_width(tags, format, str);
	ft_putstr(str + 1);
}

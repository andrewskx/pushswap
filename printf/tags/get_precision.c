/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:28:33 by anboscan          #+#    #+#             */
/*   Updated: 2018/01/15 19:00:29 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_digit(t_format *format, t_tags *tags)
{
	char chr;

	while ((chr = *get_pos(format)) && (ft_isdigit(chr)))
	{
		atoi_add_digit(chr, &(tags->precision));
		format->position++;
	}
}

void	get_precision(t_tags *tags, t_format *format, va_list arg)
{
	char			chr;
	unsigned int	old;

	old = tags->precision;
	if ((chr = *get_pos(format)) == '.')
	{
		tags->set_precision = true;
		format->position++;
		tags->precision = 0;
		if ((chr = *get_pos(format)) == '*')
		{
			tags->precision = va_arg(arg, unsigned int);
			format->position++;
		}
		else
			add_digit(format, tags);
	}
	if (old > tags->precision)
		tags->precision = old;
}
